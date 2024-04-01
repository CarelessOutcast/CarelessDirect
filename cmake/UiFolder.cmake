add_custom_command(
  TARGET dmsc POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
  ${CMAKE_SOURCE_DIR}/src/gui/ui/basic.ui 
  ${CMAKE_BINARY_DIR}/bin/gui/basic.ui
  )
