cmake_minimum_required(VERSION 3.29)
project(00)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

add_executable(00
        ex00/megaphone.cpp
        ex01/main.cpp)

add_executable(01
        ex01/Contact.hpp
        ex01/Contact.cpp
        ex01/PhoneBook.cpp
        ex01/PhoneBook.hpp
        ex01/main.cpp)

add_executable(02
        ex02/Account.hpp
        ex02/main.cpp)
