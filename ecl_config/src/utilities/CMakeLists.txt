###############################################################################
# SETUP
###############################################################################

ecl_add_utility(detect_endian detect_endian.cpp)
install(TARGETS detect_endian RUNTIME DESTINATION bin) 

rosbuild_add_executable(detect_posix detect_posix.cpp)
install(TARGETS detect_posix RUNTIME DESTINATION bin) 

