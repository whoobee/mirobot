# MiroBot Navigation
=====================

Navigation stack for implementing `slam_gmapping`.

### Build

```bash
$ catkin_make --only_pkg_with_deps mirobot_navigation
$ source devel/setup.bash
```

### Test

#### Simultaneous Localization and Mapping (SLAM)

```bash
$ roslaunch mirobot_navigation slam_gmapping.launch
```

#### Navigation

```bash
$ roslaunch mirobot_navigation navigate.launch
$ rosrun mirobot_navigation send_goal <x y w>
```