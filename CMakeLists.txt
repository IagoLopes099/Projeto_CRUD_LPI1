cmake_minimum_required(VERSION 3.16)

project(Projeto_Prog1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/forms)

set(PROJECT_SOURCES
    main.cpp
    src/mainwindow.cpp
    include/mainwindow.h
    forms/mainwindow.ui
    src/editarJanela.cpp
    include/editarJanela.h
    forms/editarJanela.ui
    include/Equipe.h
    include/Subequipe.h
    include/Atividade.h
    src/Equipe.cpp
    include/loginpage.h
    src/loginpage.cpp
    forms/loginpage.ui
    include/cappage.h
    src/cappage.cpp
    forms/cappage.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Projeto_Prog1
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Projeto_Prog1 SHARED ${PROJECT_SOURCES})
    else()
        add_executable(Projeto_Prog1 ${PROJECT_SOURCES})
    endif()
endif()

target_link_libraries(Projeto_Prog1 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(Projeto_Prog1 PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Projeto_Prog1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Projeto_Prog1)
endif()
