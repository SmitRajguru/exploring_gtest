cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
# add_executable(simple_math simple_math.cpp simple_math.h)
add_executable(runTests gtest_math.cpp simple_math.cpp simple_math.h)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)