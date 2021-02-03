cmake_minimum_required(VERSION 3.15)
project(vectors)

set(CMAKE_CXX_STANDARD 20)

set(CATCH2DIR /Users/rarce/ccom3034)

IF(EXISTS ${CATCH2DIR})   
  include_directories(${CATCH2DIR})
  add_executable(vectors main.cpp ${CATCH2DIR}/catch_amalgamated.cpp)
else()
  add_executable(vectors main.cpp catch_amalgamated.cpp)
endif()
