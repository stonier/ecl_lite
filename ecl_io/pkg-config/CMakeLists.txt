###############################################################################
# Configuration
###############################################################################

set(PKG_CONFIG_FILE ecl_io.pc)

if(PLATFORM_HAS_POSIX_THREADS)
  set(PRIVATE_LIBS "-pthread")
endif()

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/${PKG_CONFIG_FILE}.in 
    ${CMAKE_CURRENT_SOURCE_DIR}/${PKG_CONFIG_FILE}
    @ONLY )
    
###############################################################################
# Install
###############################################################################

install(FILES ${PKG_CONFIG_FILE} DESTINATION lib/pkgconfig)

