###############################################################################
# Examples
###############################################################################

add_executable(ecl_demo_errors errors.cpp)
target_link_libraries(ecl_demo_errors ${PROJECT_NAME})
install(TARGETS ecl_demo_errors RUNTIME DESTINATION bin)
