include(GetGui) # using GTK3

add_library(dmsc_gui_static STATIC gui.cpp)

target_include_directories(dmsc_gui_static PUBLIC 
  include
  ${GTKMM_INCLUDE_DIRS}
  )
target_precompile_headers(dmsc_gui_static PUBLIC <string> <iostream>)
target_link_libraries(dmsc_gui_static PUBLIC 
  client_shared 
  server_shared
) # TODO: Add the gui libraries

# Start custom build steps

include(BuildInfo)
BuildInfo(dmsc_gui_static)

include(Coverage)
CleanCoverage(dmsc_gui_static)

include(Format)
Format(dmsc_gui_static .)

include(CppCheck)
# AddCppCheck(dmsc_gui_static)

include(Doxygen)
Doxygen(dmsc_gui src/gui)

# End custom build steps

target_link_libraries(dmsc_gui_static PUBLIC ${GTKMM_LIBRARIES})

add_executable(dmsc main.cpp)
include(UiFolder)

target_link_libraries(dmsc dmsc_gui_static)




