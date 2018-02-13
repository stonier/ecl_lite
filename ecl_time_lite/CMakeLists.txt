##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 3.5)
project(ecl_time_lite)

##############################################################################
# ament
##############################################################################

find_package(ament_cmake REQUIRED)
find_package(ecl_build REQUIRED)
find_package(ecl_config REQUIRED)
find_package(ecl_errors REQUIRED)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include)

##############################################################################
# Platform Configuration
##############################################################################

# This configures ECL_PLATFORM_TIME_LIBRARIES and 
# other ECL_PLATFORM_HAS_XXX flags
ecl_detect_timers()  

##############################################################################
# Exports
##############################################################################

include_directories(include 
  ${ecl_build_INCLUDE_DIRS}
  ${ecl_config_INCLUDE_DIRS}
  ${ecl_errors_INCLUDE_DIRS}
  )

##############################################################################
# CMake File Configuration
##############################################################################

# Make sure we pick up cmake configured files
include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)

##############################################################################
# Actual project configuration
##############################################################################

add_subdirectory(include)
add_subdirectory(src)


ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})
ament_package()
