###############################################################################
# SETUP
###############################################################################

add_executable(detect_endian detect_endian.cpp)
install(TARGETS detect_endian RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}) 

add_executable(detect_posix detect_posix.cpp)
install(TARGETS detect_posix RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}) 

