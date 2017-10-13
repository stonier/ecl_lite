##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 3.5)
project(ecl_console)

##############################################################################
# Find
##############################################################################

find_package(ament_cmake REQUIRED)
find_package(ecl_build REQUIRED)
find_package(ecl_config REQUIRED)

##############################################################################
# Project configuration
##############################################################################

ecl_enable_cxx11_compiler()
include_directories(include 
  ${ecl_build_INCLUDE_DIRS}
  ${ecl_config_INCLUDE_DIRS}
  )

##############################################################################
# Installs
##############################################################################

install(
  DIRECTORY include/ecl/
  DESTINATION include/ecl
  FILES_MATCHING PATTERN "*.hpp"
)


ament_export_include_directories(include)
ament_package()
