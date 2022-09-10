cmake_minimum_required(VERSION 3.12)
project (HeroesClient)
set(CMAKE_CXX_STANDARD 20)

find_library(HEROES_LIB libHeroes.so)
message(STATUS ${HEROES_LIB})

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE ${HEROES_LIB})