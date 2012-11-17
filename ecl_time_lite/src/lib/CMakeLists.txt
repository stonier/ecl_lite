##############################################################################
# Dependencies
##############################################################################

if(ECL_PLATFORM_HAS_RT_TIMERS)
  set (LIBRARIES "-lrt ${LIBRARIES}")
elseif(ECL_PLATFORM_HAS_POSIX_TIMERS)
  set(LIBRARIES "-pthread ${LIBRARIES}")
endif()

# Remove leading and trailing whitespace
string(STRIP "${LIBRARIES}" LIBRARIES) 

##############################################################################
# Files
##############################################################################

file(GLOB SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
add_library(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${LIBRARIES})
install(TARGETS ${PROJECT_NAME}
   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
   PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
)
