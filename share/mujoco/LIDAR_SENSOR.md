# LiDAR sensors

The simulation package automatically scans and publishes site-backed MuJoCo
user sensors that have a matching `simulation.lidar.<sensor>.model` custom text
field. Other site-backed user sensors are ignored.

## Minimal MID360 example

```xml
<mujoco model="lidar_example">
  <worldbody>
    <body name="lidar_link">
      <site name="lidar_mount" pos="0.10 0 0.20" quat="1 0 0 0"/>
    </body>
  </worldbody>

  <sensor>
    <user name="lidar" objtype="site" objname="lidar_mount"
          dim="1" datatype="real" needstage="pos"/>
  </sensor>

  <custom>
    <text name="simulation.lidar.lidar.model" data="MID360"/>
  </custom>
</mujoco>
```

The site defines the physical pose. The user-sensor name defines the ROS topic
namespace and default frame ID. LiDAR configuration deliberately uses custom
fields rather than `sensor user`, because `nuser_sensor` is global and is also
used by camera stream configuration.

Built-in model names are `MID360`, `VLP32`, `HDL64`, and `OS128`. Names are
case-insensitive. `CUSTOM` starts with a generic rotary profile.

## Custom profile and overrides

```xml
<custom>
  <text name="simulation.lidar.front.model" data="CUSTOM"/>
  <text name="simulation.lidar.front.pattern" data="ROTARY"/>
  <text name="simulation.lidar.front.frame_id" data="front_lidar_frame"/>

  <!-- min range, max range (metres) -->
  <numeric name="simulation.lidar.front.range" data="0.2 120"/>

  <!-- point rate (points/s), publish rate (Hz) -->
  <numeric name="simulation.lidar.front.rate" data="200000 10"/>

  <!-- horizontal min/max, vertical min/max (degrees) -->
  <numeric name="simulation.lidar.front.fov" data="-180 180 -15 15"/>
  <numeric name="simulation.lidar.front.channels" data="32"/>

  <!-- Optional non-uniform vertical channel angles (degrees). -->
  <numeric name="simulation.lidar.front.vertical_angles"
           data="-15 -10 -5 0 5 10 15"/>

  <!-- range sigma (m), angle sigma (deg), dropout probability,
       latency (s), latency jitter sigma (s), random seed -->
  <numeric name="simulation.lidar.front.noise"
           data="0.01 0.02 0.001 0.0 0.0 1"/>

  <!-- MuJoCo geom groups 0..5 and static-geom visibility. -->
  <numeric name="simulation.lidar.front.geomgroup" data="1 1 1 1 1 1"/>
  <numeric name="simulation.lidar.front.static" data="1"/>
  <text name="simulation.lidar.front.exclude_body" data="robot_base"/>

  <!-- enabled, maximum points, point radius (m) -->
  <numeric name="simulation.lidar.front.preview" data="1 2000 0.012"/>
</custom>
```

## Optional internal IMU

An IMU is disabled by default for every LiDAR model, including `MID360`. Enable
it explicitly with one optional numeric field:

```xml
<numeric name="simulation.lidar.front.imu"
         data="1 200 0.001 0.01 0.0 0.0 1"/>
```

The values, in order, are:

| Index | Value | Unit / meaning |
| --- | --- | --- |
| 0 | enabled | `1` enables the publisher; `0` disables it |
| 1 | publish rate | Hz |
| 2 | gyroscope noise sigma | rad/s |
| 3 | accelerometer noise sigma | m/s² |
| 4 | latency | seconds |
| 5 | latency jitter sigma | seconds |
| 6 | random seed | non-negative integer |

Trailing values may be omitted. Their defaults are `200 Hz`, zero noise, zero
latency and seed `1`. IMU sampling shares the LiDAR's asynchronous MuJoCo state
snapshot but has its own schedule and random generator, so enabling it neither
blocks the physics thread nor changes the point-cloud noise sequence.

Supported patterns are `MID360`, `ROTARY`, `GRID`, and `SINGLE_LINE`.
`vertical_angles` overrides both the uniform vertical FOV distribution and the
channel count.

When `exclude_body` is omitted, the site's body is excluded if it is not the
world body. `mj_multiRay` can exclude only one body directly. To exclude an
entire robot, place robot collision geoms in a dedicated MuJoCo geom group and
disable that group with `geomgroup`.

## ROS 2 interface

For a sensor named `lidar`, the output is:

```text
/simulation/lidar/points  sensor_msgs/msg/PointCloud2
/simulation/lidar/imu     sensor_msgs/msg/Imu  (only when enabled)
```

The point fields are:

| Field | Type | Meaning |
| --- | --- | --- |
| `x`, `y`, `z` | `FLOAT32` | Sensor-local position in metres |
| `intensity` | `FLOAT32` | Simplified incidence/range intensity, 0-255 |
| `ring` | `UINT16` | Mechanical channel or emitter index |
| `time` | `FLOAT32` | Seconds from the beginning of this cloud |

The default frame ID is `<sensor_name>_frame`. Coordinates follow REP-103:
X forward, Y left, Z up. Sensor-data QoS with a one-message history is used.
Invalid and out-of-range returns are omitted and the cloud is unorganized.

The IMU uses the same frame ID as the point cloud. It reports site-local angular
velocity and accelerometer specific force, including approximately `+9.81 m/s²`
on local Z for a stationary, level sensor under the default gravity. No attitude
filter is simulated, so `orientation_covariance[0]` is `-1`; angular-velocity
and linear-acceleration covariance diagonals are the configured noise variances.
The publisher uses sensor-data QoS with a one-message history. If the `imu`
field is absent or disabled, the IMU topic is not created.

Point production follows simulation time. `point_rate` and `publish_rate` are
independent, the pattern index advances continuously across messages, and each
physics-step batch uses that step's site and scene pose. This produces motion
distortion without running ray casting in the control thread. Completed scans
are published from a separate ROS callback group.

## MID360 fidelity note

The built-in MID360 profile uses the nominal 200,000 points/s, 10 Hz, 360-degree
azimuth and approximately -7.2 to 52.2-degree elevation envelope. Its bundled
scan path is a deterministic, non-repeating four-emitter approximation. It does
not claim to reproduce proprietary optical calibration. A verified vendor
pattern can replace the direction generator later without changing XML or ROS
interfaces.

Livox `CustomMsg`, dual return, weather effects, and GPU backends are optional
future compatibility layers; the core package has no vendor or Python runtime
dependency.
