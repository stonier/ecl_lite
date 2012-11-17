###############################################################################
# Examples
###############################################################################

add_executable(demo_errors errors.cpp)
target_link_libraries(demo_errors ecl_errors)
install(TARGETS demo_errors RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}) 
