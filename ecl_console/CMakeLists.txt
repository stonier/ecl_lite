##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 2.8.3)
project(ecl_console)

##############################################################################
# Find
##############################################################################

find_package(catkin REQUIRED COMPONENTS ecl_build ecl_config)

##############################################################################
# Exports
##############################################################################

catkin_package(
        INCLUDE_DIRS
            include
        CATKIN_DEPENDS
            ecl_config
	)


##############################################################################
# Actual project configuration
##############################################################################

include_directories(include ${catkin_INCLUDE_DIRS})

add_subdirectory(include)