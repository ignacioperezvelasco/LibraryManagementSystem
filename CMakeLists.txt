cmake_minimum_required(VERSION 3.10)

set(CMAKE_BUILD_TYPE Debug)


project(LibraryManagementSystem)

set(CMAKE_CXX_STANDARD 17)

# Agrega tus archivos fuente y encabezado
set(SOURCES
    code/main.cpp
    code/Classes/BookManager/Cpp/BookManager.cpp
    code/Classes/BookManager/Cpp/Book.cpp
    code/Classes/StaffManager/Cpp/Staff.cpp
    code/Classes/StaffManager/Cpp/StaffManager.cpp
    # Agrega otros archivos fuente según sea necesario
)

set(HEADERS
    code/Classes/BookManager/Header/BookManager.h
    code/Classes/BookManager/Header/Book.h
    code/Classes/StaffManager/Header/StaffManager.h
    # Agrega otros archivos de encabezado según sea necesario
)

add_executable(LibraryManagementSystem ${SOURCES} ${HEADERS})

# Añade directorios de inclusión
target_include_directories(LibraryManagementSystem PRIVATE code/Classes/BookManager/Header)

# Añade la biblioteca jsoncpp
find_package(PkgConfig REQUIRED)
pkg_search_module(JSONCPP REQUIRED jsoncpp)
include_directories(${JSONCPP_INCLUDE_DIRS})
target_link_libraries(LibraryManagementSystem PRIVATE ${JSONCPP_LIBRARIES})
