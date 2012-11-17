##############################################################################
# Files
##############################################################################

rosbuild_add_gtest(test_byte_array byte_array.cpp)
#target_link_libraries(test_first_test ${PROJECT_NAME})
target_link_libraries(test_byte_array ${ECL_LINK_NO_AS_NEEDED_FLAG} -lpthread)
