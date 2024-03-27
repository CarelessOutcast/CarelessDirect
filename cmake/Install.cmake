include(GNUInstallDirs)

install(TARGETS client_obj client_shared client_static server_obj server_shared server_static
  EXPORT DMSCLibrary
  ARCHIVE development
  LIBRARY runtime
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/dmsc
    COMPONENT runtime
)

if (UNIX)
  install(CODE "execute_process(COMMAND ldconfig)"
    COMPONENT runtime
    )
endif()


install(EXPORT DMSCLibrary 
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/dmsc/cmake
  NAMESPACE dmsc::
  COMPONENT runtime
)

install(files "dmscConfig.cmake"
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/dmsc/cmake
)

install(TARGETS dmsc
  RUNTIME COMPONENT runtime
)

set(CPACK_PACKAGE_VENDOR "Carlos Tapia")
set(CPACK_PACKAGE_CONTACT "TapiaCarlos32@gmail.com")
set(CPACK_PACKAGE_DESCRIPTION "Direct Messaging Server and Client")
include(CPack)
