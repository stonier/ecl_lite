##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 3.5)
project(ecl_time_lite)

##############################################################################
# Find Packages
##############################################################################

find_package(ament_cmake REQUIRED)
find_package(ecl_build REQUIRED)
find_package(ecl_config REQUIRED)
find_package(ecl_errors REQUIRED)

##############################################################################
# Project Configuration
##############################################################################

ecl_enable_cxx14_compiler()

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include)

# This configures ECL_PLATFORM_TIME_LIBRARIES and
# other ECL_PLATFORM_HAS_XXX flags
ecl_detect_timers()

include_directories(include
  ${ecl_build_INCLUDE_DIRS}
  ${ecl_config_INCLUDE_DIRS}
  ${ecl_errors_INCLUDE_DIRS}
  )

# Make sure we pick up cmake configured files
include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)

##############################################################################
# Sources
##############################################################################

add_subdirectory(include)
add_subdirectory(src)

##############################################################################
# Exports
##############################################################################

# TODO: need to somehow get the libraries defined in
# ${ECL_PLATFORM_TIME_LIBRARIES} exported (catkin-ament regression)

ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})
ament_export_dependencies(
    ecl_config
    ecl_errors
)
ament_package()
