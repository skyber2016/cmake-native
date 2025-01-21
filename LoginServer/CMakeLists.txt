# CMakeList.txt : CMake project for LoginServer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project ("LoginServer")
# Add source to this project's executable.
add_executable (LoginServer "src/main.cpp" )

target_link_libraries(LoginServer "Core")

include_directories(../Core/includes)



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LoginServer PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
