add_executable(server_test server_test.cpp)
target_link_libraries(server_test PRIVATE server_static)
AddTests(server_test)
EnableCoverage(server_obj)
