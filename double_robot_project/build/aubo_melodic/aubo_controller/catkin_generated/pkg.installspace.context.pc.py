# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;std_msgs;sensor_msgs;control_msgs;actionlib;moveit_core;moveit_ros_planning_interface;interactive_markers;trajectory_msgs;industrial_msgs;actionlib;actionlib_msgs;industrial_utils;urdf".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-laubo_controller_dummy".split(';') if "-laubo_controller_dummy" != "" else []
PROJECT_NAME = "aubo_controller"
PROJECT_SPACE_DIR = "/home/xurui/double_robot_project/install"
PROJECT_VERSION = "1.3.3"
