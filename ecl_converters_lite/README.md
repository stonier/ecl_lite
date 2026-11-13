## Overview

Currently just fundamental type <-> byte array converters. These are
common for control io operations (e.g. on a serial port).

## Compiling & Linking



```cplusplus
#include <ecl/converters_lite.hpp>

// The converter functions
// int32/uint32 -> char*, uchar*
using ecl::from_byte_array;
```



## Examples

Take char when using the byte arrays to make sure that the required
number of chars is available for the conversion. There is no way of
catching this error except via segfault. For robust converters, see
[ecl_converters](https://index.ros.org/p/ecl_converters).



```cplusplus
ecl::int32 value;
char minus_two[4] = { 0xfe, 0xff, 0xff, 0xff };
unsigned char u_minus_two[4] = { 0xfe, 0xff, 0xff, 0xff };
ecl::from_byte_array(value,minus_two);  // value=-2
ecl::from_byte_array(value,u_minus_two); // value=-2
```
