##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 3.5)
project(ecl_config)

##############################################################################
# Find Packages
##############################################################################

find_package(ament_cmake REQUIRED)
find_package(ecl_build REQUIRED)

##############################################################################
# Project Configuration
##############################################################################

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include)

ecl_enable_cxx14_compiler()

ecl_detect_platform()

include_directories(include
  ${CMAKE_CURRENT_BINARY_DIR}/include
  ${ecl_build_INCLUDE_DIRS}
  )

##############################################################################
# Sources
##############################################################################

add_subdirectory(include)
add_subdirectory(src)

##############################################################################
# Exports
##############################################################################

ament_export_include_directories(include)
ament_package()

