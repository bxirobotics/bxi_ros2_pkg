
## Set up environment
if you are at a venv of python3.10, make sure the below module is installed:     
```
pip install catkin_pkg
ip install empy==3.3.4 pyros-genmsg setuptools  # not empy which is empy==4.0 there is a version incompatibility
pip install lark
```

## Test    
Activate bxi_ros2_pkg environment:        
```
source /opt/bxi/bxi_ros2_pkg/setup.bash
```
Run simulation test    
```
ros2 launch mujoco simulation_elf2_trunk_launch.py
```
There should be showing up a mujoco window with elf2 model simulation.     
    
## Usage
This ROS2 package should be installed/copied to a comman directory such as /opt/bxirobotics/bxi_ros2_pkg    

In building bxi_ros2_example, bxi_ros2_pkg is refered as a child package:          
```
# In bxi_ros2_example source dir:
source /opt/bxi/bxi_ros2_pkg/setup.bash   
./build.sh
source ./install/setup.bash
ros2 launch bxi_example_py_trunk example_launch.py
```    
