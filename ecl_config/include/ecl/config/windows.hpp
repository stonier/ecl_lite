/**
 * @file /ecl_config/include/ecl/config/windows.hpp
 *
 * @brief Custom setup for windoze.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef ECL_CONFIG_WINDOWS_HPP_
#define ECL_CONFIG_WINDOWS_HPP_

/*****************************************************************************
** Win32
*****************************************************************************/

#include "ecl.hpp"

#if defined(ECL_IS_WIN32)
    #include <windows.h>
	#ifdef min
	  #undef min
	#endif
	#ifdef max
	  #undef max
	#endif

    #ifdef _MSC_VER
	  #pragma warning (disable:4996)  // Disable warnings about deprecated ctime
      #pragma warning (disable:4290)  // Disable warnings about unsupported c++ exception specifications
    #endif
#endif

#endif /* ECL_CONFIG_WINDOWS_HPP_ */
