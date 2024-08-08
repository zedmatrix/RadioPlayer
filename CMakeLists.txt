cmake_minimum_required(VERSION 3.5)

project(RadioPlayer LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Multimedia)

add_executable(RadioPlayer
    mainwindow.ui
    mainwindow.h
    main.cpp
    mainwindow.cpp
    actions.h
    actions.cpp
)

target_link_libraries(RadioPlayer Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Multimedia)
