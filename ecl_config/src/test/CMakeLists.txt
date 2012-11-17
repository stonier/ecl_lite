###############################################################################
# GTEST SETUP
###############################################################################

# Gtest is not picking up -pthreads when --as-needed is on, so force it.
ecl_link_no_as_needed(ECL_LINK_NO_AS_NEEDED_FLAG)

rosbuild_add_gtest(test_char_sign char_sign.cpp)
target_link_libraries(test_char_sign ${ECL_LINK_NO_AS_NEEDED_FLAG} -lpthread)

rosbuild_add_gtest(test_endianness endianness.cpp)
target_link_libraries(test_endianness ${ECL_LINK_NO_AS_NEEDED_FLAG} -lpthread)

rosbuild_add_gtest(test_portable_types portable_types.cpp)
target_link_libraries(test_portable_types ${ECL_LINK_NO_AS_NEEDED_FLAG} -lpthread)
