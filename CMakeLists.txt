cmake_minimum_required(VERSION 3.29)
project(00)

set(CMAKE_CXX_STANDARD 14)

add_executable(00
    ex00/Makefile
    ex00/megaphone.cpp
        ex01/Contact.h
        ex01/Contact.cpp
        ex01/PhoneBook.cpp
        ex01/PhoneBook.h
        ex01/main.cpp)
