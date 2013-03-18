###############################################################################
# SETUP
###############################################################################

add_executable(ecl_detect_endian detect_endian.cpp)
install(TARGETS ecl_detect_endian RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}) 

add_executable(ecl_detect_posix detect_posix.cpp)
install(TARGETS ecl_detect_posix RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}) 

