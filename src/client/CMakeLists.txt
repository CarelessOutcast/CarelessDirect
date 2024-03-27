add_library(client_obj OBJECT client.cpp)

# TODO: Understand line 5 & 6
target_include_directories(client_obj INTERFACE
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
  )

set_target_properties(client_obj PROPERTIES
  PUBLIC_HEADER src/client/include/client/client.h
  POSITION_INDEPENDENT_CODE 1
  )

# Shared & Static lib from single obj
add_library(client_shared SHARED)
target_link_libraries(client_shared client_obj)

add_library(client_static STATIC)
target_link_libraries(client_static client_obj)


# Custom scripts for the build; Check cmake/
include(Coverage)
CleanCoverage(client_static)

include(Format)
Format(client_static .)

include(CppCheck)
AddCppCheck(client_obj)

include(Doxygen)
Doxygen(client src/client)
