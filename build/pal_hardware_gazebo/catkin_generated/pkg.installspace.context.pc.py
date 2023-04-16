# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include;/usr/include/gazebo-11;/usr/include/bullet;/usr/include/simbody;/usr/include/sdformat-9.10;/usr/include/ignition/math6;/usr/include/OGRE;/usr/include/OGRE/Terrain;/usr/include/OGRE/Paging;/usr/include/ignition/transport8;/usr/include/ignition/msgs5;/usr/include/ignition/common3;/usr/include/ignition/fuel_tools4".split(';') if "${prefix}/include;/usr/include;/usr/include/gazebo-11;/usr/include/bullet;/usr/include/simbody;/usr/include/sdformat-9.10;/usr/include/ignition/math6;/usr/include/OGRE;/usr/include/OGRE/Terrain;/usr/include/OGRE/Paging;/usr/include/ignition/transport8;/usr/include/ignition/msgs5;/usr/include/ignition/common3;/usr/include/ignition/fuel_tools4" != "" else []
PROJECT_CATKIN_DEPENDS = "control_toolbox;hardware_interface;joint_limits_interface;gazebo_ros_control".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lpal_hardware_gazebo".split(';') if "-lpal_hardware_gazebo" != "" else []
PROJECT_NAME = "pal_hardware_gazebo"
PROJECT_SPACE_DIR = "/home/tomer/cogrob_project/install"
PROJECT_VERSION = "1.0.1"
