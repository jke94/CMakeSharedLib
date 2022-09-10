cmake_minimum_required(VERSION 3.12)
project (Heroes)
set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(Heroes SHARED src/Batman.cpp src/Heroe.cpp src/Superman.cpp)

install(TARGETS Heroes DESTINATION /usr/lib)
install(FILES include/Heroe.h DESTINATION include)