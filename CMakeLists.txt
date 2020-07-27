cmake_minimum_required(VERSION 3.0.0)
project(hello_qt_signals VERSION 0.1.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(GTest REQUIRED)

add_executable(hello_qt_signals test_battery.cpp battery_cell.cpp battery.cpp)
target_include_directories(hello_qt_signals PUBLIC ${GTEST_INCLUDE_DIRS})
target_link_libraries(hello_qt_signals 
    Qt5::Widgets
    Qt5::Core 
    /usr/local/lib/libgtest.a 
    /usr/local/lib/libgmock.a 
    /usr/local/lib/libgtest_main.a)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
