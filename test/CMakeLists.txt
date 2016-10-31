find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(test1 ${CMAKE_CURRENT_SOURCE_DIR}/test1.cpp)
target_link_libraries(test1 ${GTEST_BOTH_LIBRARIES})
add_test(alltests test1)

