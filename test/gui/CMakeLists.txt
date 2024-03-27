add_executable(gui_test gui_test.cpp)
target_link_libraries(gui_test PRIVATE gui_static)
AddTest(gui_test)
EnableCoverage(gui_obj)
