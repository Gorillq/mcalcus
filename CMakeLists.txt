cmake_minimum_required(VERSION 3.27)
project(mcalcus)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-D_GLIBCXX_DEBUG -fsanitize=address,undefined)
add_link_options(-fsanitize=address,undefined)


add_executable(mcalcus main.cpp
        Matrix.cpp
        Matrix.h
        vectormat.h
        vectormat.cpp
)
