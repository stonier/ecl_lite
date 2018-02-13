##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 3.5)
project(ecl_config)

##############################################################################
# ament
##############################################################################

find_package(ament_cmake REQUIRED)
find_package(ecl_build REQUIRED)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include)

##############################################################################
# ECL Configuration
##############################################################################

ecl_detect_platform()

##############################################################################
# Actual project configuration
##############################################################################

include_directories(include
  ${CMAKE_CURRENT_BINARY_DIR}/include
  ${ecl_build_INCLUDE_DIRS}
  )

add_subdirectory(include)
add_subdirectory(src)

ament_export_include_directories(include)
ament_package()

