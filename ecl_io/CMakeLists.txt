##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 3.5)
project(ecl_io)

##############################################################################
# ament
##############################################################################

set(sockets_INCLUDE_DIRS "") # Just assume they're in the system dirs for now
if(MINGW)
  set(sockets_LIBRARIES rpcrt4 shell32 ws2_32 advapi32 kernel32 msvcrt)
elseif(WIN32)
  find_library(sockets_LIBRARIES ws2_32)
else()
    set(sockets_LIBRARIES "")
endif()

##############################################################################
# ament
##############################################################################

find_package(ament_cmake REQUIRED)
find_package(ecl_config REQUIRED)
find_package(ecl_errors REQUIRED)
include_directories(include 
  ${ecl_config_INCLUDE_DIRS}
  ${ecl_errors_INCLUDE_DIRS}
  )

##############################################################################
# Actual project configuration
##############################################################################

add_subdirectory(include)
add_subdirectory(src)


ament_export_include_directories(include)
ament_package()
