find_package(PkgConfig REQUIRED)

pkg_check_modules(GTKMM gtkmm-4.0 REQUIRED)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
add_definitions(${GTKMM_CFLAGS_OTHER})

