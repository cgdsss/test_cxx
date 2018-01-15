cmake_minimum_required(VERSION 2.8.3)
project(test_cxx)
find_package(Boost
    REQUIRED COMPONENTS thread system)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(test_cxx 
src/main.cpp
src/test.cpp)
target_link_libraries( test_cxx ${Boost_LIBRARIES}
)
