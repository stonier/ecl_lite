/**
 * @file /ecl_config/src/test/portable_types.cpp
 *
 * @brief Unit test for the portable types.
 *
 * @date February, 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <iostream>
#include <gtest/gtest.h>
#include "../../include/ecl/config/endianness.hpp"

/*****************************************************************************
** Tests
*****************************************************************************/
/*
 * Just make sure these are all defined. It will fail with an #error at
 * compile time if they aren't.
 */
TEST(TypeTests,fundamentals) {
	ecl::int8 i8 = 1; i8 = 2; (void)i8;
	ecl::uint8 ui8 = 1; ui8 = 2; (void)ui8;
	ecl::int8 i16 = 1; i16 = 2; (void)i16;
	ecl::uint8 ui16 = 1; ui16 = 2; (void)ui16;
	ecl::int8 i32 = 1; i32 = 2; (void)i32;
	ecl::uint8 ui32 = 1; ui32 = 2; (void)ui32;
	ecl::int8 i64 = 1; i64 = 1; (void)i64;
	ecl::uint8 ui64 = 1; ui64 = 2; (void)ui64;
	ecl::float32 f32 = 1.0; f32 = 2.0; (void)f32;
	ecl::float64 f64 = 1.0; f64 = 2.0; (void)f64;
	#if ECL_SIZE_OF_LONG_DOUBLE == 12
		ecl::float96 f96 = 1.0; f96 = 2.0; (void)f96;
	#elif ECL_SIZE_OF_LONG_DOUBLE == 16
		ecl::float128 f128 = 1.0; f128 = 2.0; (void)f128;
	#endif
    SUCCEED();
}

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}


