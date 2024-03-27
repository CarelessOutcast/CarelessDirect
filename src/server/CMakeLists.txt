
add_library(server_obj OBJECT server.cpp)

# TODO: Understand line 5 & 6
target_include_directories(server_obj INTERFACE
  "$<BUILD_INTERFACE>:${CMAKE_CURRENT_SOURCE_DIR}/include"
  "$<INSTALL_INTERFACE>:${CMAKE_INSTALL_INCLUDEDIR}"
  )

set_target_properties(server_obj PROPERTIES
  PUBLIC_HEADER src/server/include/server/server.h
  POSITION_INDEPENDENT_CODE 1
  )

# Shared & Static lib from single obj
add_library(server_shared SHARED)
target_link_libraries(server_shared server_obj)

add_library(server_static STATIC)
target_link_libraries(server_static server_obj)


# Custom scripts for the build; Check cmake/
include(Coverage)
CleanCoverage(server_static)

include(Format)
Format(server_static .)

include(CppCheck)
AddCppCheck(server_obj)

include(Doxygen)
Doxygen(server src/server)
