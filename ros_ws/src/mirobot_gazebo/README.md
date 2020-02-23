# MiroBot Gazebo

Gazebo files to test the robot in the simulator.

### Build

Build package: 

```bash
$ catkin_make --only_pkg_with_deps mirobot_gazebo
$ source devel/setup.bash
```

Install dependencies: 

```bash
$ sudo apt-get install ros-kinetic-ros-control
$ sudo apt-get install ros-kinetic-controller-manager
```

### Test

Test the robot xacro:
```
$ roslaunch mirobot_gazebo mirobot_world.launch world:=empty paused:=true
```

Launch Gazebo & rviz simulations:
```
$ roslaunch mirobot_gazebo mirobot_world.launch
```

Move with the keyboard:
```
$ rosrun turtlebot_teleop turtlebot_teleop_key /turtlebot_teleop/cmd_vel:=/mirobot/cmd_vel
```

![Gazebo simulation](../resources/gazebo.jpg)
