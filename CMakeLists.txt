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
        include/screen/shapes/Rectangle.hpp
        include/screen/Color.hpp
        include/screen/DisplayDriver.hpp

        include/screen/test/TestPatterns.hpp
)

#target_sources(${PROJECT_NAME} PRIVATE
#
#)

if(${PROJECT_NAME} STREQUAL ${CMAKE_PROJECT_NAME})
    message(FATAL_ERROR "This project cannot be compiled on its own and is dependent on a parent project and EVT-Core")
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE EVT)

install_and_expose(${PROJECT_NAME})

###############################################################################
# Convert CMake flags to compiler flags
###############################################################################
if(EVT_SCREEN_LIBRARY_TEST_PATTERN_ENABLE)
    target_compile_definitions(SCREENLIBRARY PUBLIC EVT_SCREEN_LIBRARY_TEST_PATTERN_ENABLE)
    message(WARNING "Test patterns are enabled, beware of higher flash usage.")
endif()
