## Overview

Api such as this are only added on an as needed basis. Up until now, its
mostly been used as a sandbox for testing cross-platform api that wrap
slight differences in posix and win32 functionality.

## Compiling & Linking



```cplusplus
#include <ecl/io.hpp>

// Cross platform functions
using ecl::init_sockets;      // initialises winsock on windows.
using ecl::shutdown_sockets;  // shuts down winsock on windows.
using ecl::poll_sockets;      // a drop in for posix poll() on windoze.
using ecl::close_socket;      // a drop in for posix socketpair() on windoze.
using ecl::socket_pair;       // standardises the api for closing a socket.
```



Outside ros, you will also need to link to `ecl_io`.

## Examples

- `src/examples/poll.cpp`
- `src/examples/sockets.cpp`
- `src/examples/socketpair.cpp`
