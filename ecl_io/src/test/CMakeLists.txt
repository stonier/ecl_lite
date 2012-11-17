##############################################################################
# Files
##############################################################################

rosbuild_add_gtest(test_first_test first_test.cpp)
target_link_libraries(test_first_test ${PROJECT_NAME})
