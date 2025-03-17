# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Projeto_Prog1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Projeto_Prog1_autogen.dir/ParseCache.txt"
  "Projeto_Prog1_autogen"
  )
endif()
