cmake_minimum_required(VERSION 2.8.12)
project (PrimeUtil)
set(CMAKE_CXX_STANDARD 17)

find_library(PRIMEUTIL_LIB libPrimeUtil.so)
message(STATUS ${PRIMEUTIL_LIB})

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE ${PRIMEUTIL_LIB})