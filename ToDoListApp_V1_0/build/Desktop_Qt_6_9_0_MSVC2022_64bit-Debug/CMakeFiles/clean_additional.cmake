# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ToDoListApp_V1_0_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ToDoListApp_V1_0_autogen.dir\\ParseCache.txt"
  "ToDoListApp_V1_0_autogen"
  )
endif()
