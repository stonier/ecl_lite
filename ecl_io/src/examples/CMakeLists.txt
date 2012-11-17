##############################################################################
# Macros
##############################################################################

macro(ecl_add_io_example exe)
  if(MINGW)
    set(SOCK_LIBS ${PROJECT_NAME} rpcrt4 shell32 ws2_32 advapi32 kernel32 msvcrt)
  elseif(WIN32)
    set(SOCK_LIBS ${PROJECT_NAME} ws2_32)
  else()
    set(SOCK_LIBS ${PROJECT_NAME})
  endif()
  add_executable(${exe} ${ARGN})
  target_link_libraries(${exe} ${SOCK_LIBS})
  install(TARGETS ${exe} RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
endmacro()

##############################################################################
# Examples
##############################################################################

ecl_add_io_example(sockets sockets.cpp)
ecl_add_io_example(socketpair socketpair.cpp)
ecl_add_io_example(poll poll.cpp)
