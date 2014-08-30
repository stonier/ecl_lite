/**
 * @file /src/lib/date.cpp
 *
 * @brief Implementation of date manipulators.
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include "../../include/ecl/time_lite/date.hpp"

/*****************************************************************************
** Macros
*****************************************************************************/

#if defined(ECL_HAS_POSIX_TIMERS) || defined(ECL_HAS_RT_TIMERS)

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace ecl {


std::string get_date_string() {
  time_t now;
  char the_date[12];

  the_date[0] = '\0';
  now = time(NULL);
  if (now != -1)
  {
    strftime(the_date, 12, "%d_%m_%Y", gmtime(&now));
  }
  return std::string(the_date);
}

} // namespace ecl

#endif POSIX_TIMERS || RT_TIMERS
