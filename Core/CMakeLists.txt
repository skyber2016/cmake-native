cmake_minimum_required (VERSION 3.8)
project ("Core")
add_library(Core SHARED "src/Core.cpp" "includes/core/Core.h" "includes/core/defs.h")
include_directories(./includes)
target_compile_definitions(Core PRIVATE CORE_EXPORTS)

find_package(boost_asio REQUIRED CONFIG)
target_link_libraries(Core PRIVATE Boost::asio)