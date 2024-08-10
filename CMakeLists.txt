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

# CMakeLists.txt

# Set the installation directories
set(CMAKE_INSTALL_PREFIX "/usr/local" CACHE PATH "Install path prefix, prepended onto install directories")

# Install the executable to /usr/local/bin
install(TARGETS RadioPlayer
        RUNTIME DESTINATION bin
)

# Install the icon to /usr/local/share/icons/hicolor/48x48/apps
install(FILES ${CMAKE_SOURCE_DIR}/images/iheart-icon.png
        DESTINATION share/icons/hicolor/48x48/apps
)

# Install the icon to /usr/local/share/icons/hicolor/48x48/apps
install(FILES ${CMAKE_SOURCE_DIR}/images/iheart-icon.png
        DESTINATION share/icons/hicolor/48x48/apps
)

# Install the .desktop file to /usr/local/share/applications
install(FILES ${CMAKE_SOURCE_DIR}/radioplayer.desktop
        DESTINATION share/applications
)
