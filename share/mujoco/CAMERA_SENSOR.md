# Camera sensors

The simulation package automatically renders and publishes cameras declared as
camera-backed MuJoCo user sensors. A regular `<camera>` remains a viewer camera
and is not published unless a matching sensor is present.

## MJCF example

```xml
<mujoco model="camera_example">
  <!-- Required for independent Color and Depth stream profiles. -->
  <size nuser_sensor="11"/>

  <worldbody>
    <body name="head">
      <camera name="camera"
              mode="fixed"
              pos="0.10 0 -0.05"
              quat="1 0 0 0"
              fovy="42.5"/>
    </body>
  </worldbody>

  <sensor>
    <user name="camera"
          objtype="camera"
          objname="camera"
          dim="1"
          datatype="real"
          needstage="pos"
          user="1280 720 42.5 848 480 58.0 30 1 0.1 10.0 1"/>
  </sensor>
</mujoco>
```

`user` values, in order:

1. Color width, default 640, range 1-4096;
2. Color height, default 480, range 1-4096;
3. Color vertical FOV in degrees, range 0-180;
4. Depth width, default 640, range 1-4096;
5. Depth height, default 480, range 1-4096;
6. Depth vertical FOV in degrees, range 0-180;
7. common frame rate, default 30 Hz, range 0.1-240 Hz;
8. Depth output enabled (`0` or `1`), default `0`;
9. minimum valid depth in metres, default 0.1;
10. maximum valid depth in metres, default 10.0;
11. preview in the MuJoCo window (`0` or `1`), default `1`.

`dim="1"` is the dimension of the otherwise unused MuJoCo user sensor output;
it is not the number of camera configuration values. Configuration is stored in
the sensor's `user` array.

The `<camera>` defines the shared pose. Color and Depth are rendered separately
with their own resolution and vertical FOV. Its `fovy` is used only as a fallback
for the legacy seven-value sensor layout.

The original seven-value layout (`width height fps depth_enabled depth_min
depth_max preview_enabled`) remains supported. In legacy mode, Color and Depth
use the same resolution and the `<camera fovy>` value.

## ROS 2 topics

For a sensor named `camera`, the package uses the RealSense ROS topic layout:

| Topic | Type | Encoding |
| --- | --- | --- |
| `/simulation/camera/color/camera_info` | `sensor_msgs/msg/CameraInfo` | Color intrinsics |
| `/simulation/camera/color/image_raw` | `sensor_msgs/msg/Image` | `rgb8` |
| `/simulation/camera/depth/camera_info` | `sensor_msgs/msg/CameraInfo` | Depth intrinsics |
| `/simulation/camera/depth/image_rect_raw` | `sensor_msgs/msg/Image` | `16UC1`, millimetres |

The sensor name is the device namespace, so a sensor named `rear_camera` uses
`/simulation/rear_camera/color/...` and `/simulation/rear_camera/depth/...`.
The Color frame ID is `camera_color_optical_frame`; the Depth frame ID is
`camera_depth_optical_frame`. Color, Depth, and both CameraInfo messages from one
capture share a timestamp.

The Depth topics exist only when Depth output is enabled. Like the official
RealSense Z16 stream, invalid or out-of-range depth pixels are published as zero.

All topics use ROS sensor-data QoS with a one-frame history. If publishing falls
behind rendering, old frames are dropped instead of delaying physics control.

Sensor names should contain only letters, digits, and underscores and should not
start with a digit. Invalid characters are changed to underscores for the topic;
the sanitized name is also used as the optical-frame prefix.

The camera preview is drawn in the main MuJoCo window. When depth output is
enabled, the RGB view and a pseudo-color depth view are displayed together.
Near valid pixels are red, far valid pixels are blue, and invalid pixels are
black. This color conversion affects only the GUI preview; the ROS Depth topic
remains raw `16UC1` data in millimetres. Set the eleventh value to `0` for
headless use or when only ROS output is required.
