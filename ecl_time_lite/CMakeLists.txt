##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 2.8.3)
project(ecl_time_lite)

##############################################################################
# Catkin
##############################################################################

find_package(catkin REQUIRED COMPONENTS ecl_build ecl_config ecl_errors)
file(MAKE_DIRECTORY ${CATKIN_DEVEL_PREFIX}/include)
catkin_package(
        INCLUDE_DIRS include ${CATKIN_DEVEL_PREFIX}/include
        LIBRARIES ${PROJECT_NAME}
	)
include_directories(SYSTEM include ${catkin_INCLUDE_DIRS})


##############################################################################
# ECL Configuration
##############################################################################

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ecl_build_DIR}/modules)
include(ecl_platform_detection)
ecl_detect_platform()
include_directories(${CATKIN_DEVEL_PREFIX}/include)

##############################################################################
# Actual project configuration
##############################################################################

add_subdirectory(include)
add_subdirectory(src)


