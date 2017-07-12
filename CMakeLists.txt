cmake_minimum_required(VERSION 3.7)
project(Pool_C__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES day00/ex00/megaphone.cpp
        day00/ex01/notebook.class.cpp
        day00/ex01/notebook.class.h
        day00/ex01/notebook.cpp
        day00/ex01/contactsSetters.class.cpp
        day00/ex01/contactsGetters.class.cpp
        day01
        day02
        day03
        day04)
add_executable(Pool_C__ ${SOURCE_FILES})