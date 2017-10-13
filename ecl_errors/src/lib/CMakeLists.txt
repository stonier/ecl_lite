###############################################################################
# SOURCES
###############################################################################

file(GLOB SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

###############################################################################
# INSTALL
###############################################################################

add_library(ecl_errors ${SOURCES})
install(TARGETS ecl_errors
   RUNTIME DESTINATION bin
   ARCHIVE DESTINATION lib
   LIBRARY DESTINATION lib
   PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
)

