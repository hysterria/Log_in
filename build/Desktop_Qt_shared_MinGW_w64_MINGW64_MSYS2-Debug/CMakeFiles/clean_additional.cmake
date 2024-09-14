# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Log_in_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Log_in_autogen.dir\\ParseCache.txt"
  "Log_in_autogen"
  )
endif()
