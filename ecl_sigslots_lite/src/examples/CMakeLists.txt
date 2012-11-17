##############################################################################
# Files
##############################################################################

add_executable(demo_sigslots sigslots.cpp)
install(TARGETS demo_sigslots RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
