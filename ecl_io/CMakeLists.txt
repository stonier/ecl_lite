##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 2.8.3)
project(ecl_io)

##############################################################################
# Catkin
##############################################################################
if(MSVC)
  find_library(socket_LIBRARIES ws2_32)
else()
  set(socket_LIBRARIES "")
endif()

find_package(catkin REQUIRED COMPONENTS ecl_config ecl_errors)
catkin_package(
        INCLUDE_DIRS include
        LIBRARIES ${PROJECT_NAME}
        )
include_directories(SYSTEM include ${catkin_INCLUDE_DIRS})

##############################################################################
# Actual project configuration
##############################################################################

add_subdirectory(include)
add_subdirectory(src)

