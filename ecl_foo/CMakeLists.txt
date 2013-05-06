##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 2.8.3)
project(ecl_foo)

##############################################################################
# Catkin
##############################################################################

find_package(catkin REQUIRED)
catkin_package(
#	INCLUDE_DIRS include
	)

##############################################################################
# Actual project configuration
##############################################################################

include_directories(SYSTEM ${catkin_INCLUDE_DIRS})

add_library(ecl_foo f.cpp)
add_executable(dude main.cpp)
target_link_libraries(dude ecl_foo)

install(TARGETS dude DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION})