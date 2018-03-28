cmake_minimum_required(VERSION 3.9)

project(GUI__ABB_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_PREFIX_PATH "/opt/qt/5.6/gcc_64/") #Qt

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Network REQUIRED )
find_package( Qt5PrintSupport REQUIRED )
find_package( Qt5Sql REQUIRED )
find_package( Qt5Xml REQUIRED )
find_package( Qt5OpenGL REQUIRED )

set(QT5_LIBRARIES Qt5::Core Qt5::Widgets Qt5::Network Qt5::PrintSupport Qt5::Sql Qt5::Xml Qt5::OpenGL)

set(GUI__ABB_ ${CMAKE_PROJECT_NAME})

set(SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        Node.cpp
        Node.h
        Tree.cpp
        Tree.h)

set(UI_SOURCES
        mainwindow.ui
        )

qt5_wrap_ui( UI_GERERATED_HEADERS ${UI_SOURCES})

add_executable(${GUI__ABB_} ${SOURCES} ${UI_GENERATED_HEADERS})

target_link_libraries(${GUI__ABB_} ${QT5_LIBRARIES})
