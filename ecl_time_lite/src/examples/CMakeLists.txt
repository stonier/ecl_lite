##############################################################################
# Files
##############################################################################

ecl_add_example(time_functions time_functions.cpp)
target_link_libraries(time_functions ecl_time_lite)