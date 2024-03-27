add_executable(client_test client_test.cpp)
target_link_libraries(client_test PRIVATE client_static)
AddTests(client_test)
EnableCoverage(client_obj)
