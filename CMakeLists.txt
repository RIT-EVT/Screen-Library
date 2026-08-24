###############################################################################
# Top level CMakeList for building the Screen-Library common source code
###############################################################################
cmake_minimum_required(VERSION 3.15)

file(STRINGS version.txt SCREENLIBRARY_VERSION)

project(SCREENLIBRARY
        VERSION ${SCREENLIBRARY_VERSION}
        LANGUAGES CXX C
        )

add_library(${PROJECT_NAME} STATIC
        include/Box.hpp
        )

target_sources(${PROJECT_NAME} PRIVATE
        src/Box.cpp
        )

#add_subdirectory(src)

if(${PROJECT_NAME} STREQUAL ${CMAKE_PROJECT_NAME})
    message(FATAL_ERROR "This project cannot be compiled on its own and is dependent on a parent project and EVT-Core")
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE EVT)

install_and_expose(${PROJECT_NAME})