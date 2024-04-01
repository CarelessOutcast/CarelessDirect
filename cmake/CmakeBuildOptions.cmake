if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    # Set the options/definitions for Debug
    add_compile_options(-g) 
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    # Set the options/definitions for Release
    add_compile_options(-O3) 
endif()
