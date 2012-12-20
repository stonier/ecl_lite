/**
 * @file /ecl_config/include/ecl/config/macros.hpp
 *
 * @brief Various macros useful for development.
 *
 * @date September 2010
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef ECL_CONFIG_UTILITY_MACROS_HPP_
#define ECL_CONFIG_UTILITY_MACROS_HPP_

/*****************************************************************************
** Include
*****************************************************************************/

#include <ecl/config/ecl.hpp>

/*****************************************************************************
** Macros
*****************************************************************************/
/**
 * @addtogroup Macros
 * @{
**/

/**
 * @brief Prevents a function from being inlined.
 *
 * The following macro prevents functions from being inlined by both
 * gnu or msvc compilers.
 *
 * @code
 * ELC_DONT_INLINE void f() { std::cout << "Dude" << std::endl; }
 * @endcode
**/
#if (defined __GNUC__)
  #define ECL_DONT_INLINE __attribute__((noinline))
#elif (defined _MSC_VER)
  #define ECL_DONT_INLINE __declspec(noinline)
#else
  #define ECL_DONT_INLINE
#endif

/*****************************************************************************
** Depracated
*****************************************************************************/

/**
 * @brief Deprecated compiler warnings.
 *
 * The following macro emits deprecated compiler warnings by both
 * gnu or msvc compilers.
 *
 * @code
 * ELC_DEPRECATED void f() { std::cout << "Dude" << std::endl; }
 * @endcode
**/
#if (defined __GNUC__)
  #define ECL_DEPRECATED __attribute__((deprecated))
#elif (defined _MSC_VER)
  #define ECL_DEPRECATED __declspec(deprecated)
#else
  #define ECL_DEPRECATED
#endif

/**
 * @}
 **/

#if defined(ECL_IS_WIN32) || defined(ECL_IS_CYGWIN)
  #define ECL_HELPER_IMPORT __declspec(dllimport)
  #define ECL_HELPER_EXPORT __declspec(dllexport)
  #define ECL_HELPER_LOCAL
#else
  #if defined(ECL_IS_POSIX) && __GNUC__ >= 4
    #define ECL_HELPER_IMPORT __attribute__ ((visibility("default")))
    #define ECL_HELPER_EXPORT __attribute__ ((visibility("default")))
    #define ECL_HELPER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define ECL_HELPER_IMPORT
    #define ECL_HELPER_EXPORT
    #define ECL_HELPER_LOCAL
  #endif
#endif
/**
 * @addtogroup Macros
 * @{
**/

/**
 * @def ECL_PUBLIC
 *
 * @brief Declare public visibility for libraries.
 *
 * This emits (in a cross platform way) the required symbols
 * for setting whether a function/class should be visible or
 * hidden. Note only does this protect the private parts
 * of your library, but it can also greatly speed up the
 * linking process.
 *
 * - http://gcc.gnu.org/wiki/Visibility
 *
 * To check what symbols are being exported for a gnu library,
 *
 * @code
 * nm -C -D <library>.so
 * @endcode
 *
 * Usage:
 *
 * @code
 * extern "C" ECL_PUBLIC void function(int a);
 * class ECL_PUBLIC SomeClass {
 *     int c;
 *     ECL_LOCAL void privateMethod();  // Only for use within this DSO
 * public:
 *     Person(int _c) : c(_c) { }
 *     static void foo(int a);
 * };
 * @endcode
 *
 * @sa ECL_LOCAL
**/
/**
 * @def ECL_LOCAL
 *
 * @brief Declare local visibility for libraries.
 *
 * @sa ECL_PUBLIC
 **/

#ifdef ECL_HAS_SHARED_LIBS // defined if ecl is compiled as a shared library
  #ifdef ECL_BUILDING_SHARED_LIB // defined if we are building the ecl lib (instead of using it)
    #define ECL_PUBLIC ECL_HELPER_EXPORT
  #else
    #define ECL_PUBLIC ECL_HELPER_IMPORT
  #endif // ECL_EXPORTS
  #define ECL_LOCAL ECL_HELPER_LOCAL
#else // defined if ecl is compiled as a static library
  #define ECL_PUBLIC
  #define ECL_LOCAL
#endif

/**
 * @}
 **/

#endif /* ECL_UTILITY_CONFIG_MACROS_HPP_ */
