##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 2.8.3)
project(ecl_converters_lite)

# Verbosity is useful - helps eclipse find paths also!
set(CMAKE_VERBOSE_MAKEFILE true)

##############################################################################
# Catkin
##############################################################################

find_package(catkin REQUIRED COMPONENTS ecl_build ecl_config)
catkin_package(
	INCLUDE_DIRS include
	)
include_directories(SYSTEM include ${catkin_INCLUDE_DIRS})

##############################################################################
# Actual project configuration
##############################################################################

add_subdirectory(include)
add_subdirectory(src)


