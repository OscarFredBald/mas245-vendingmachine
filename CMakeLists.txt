cmake_minimum_required(VERSION 3.16)

project(VendingMachine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(VendingMachine)

target_sources(VendingMachine
    PRIVATE
        main.cpp
        soda.cpp
        vendingmachine.cpp
        soda.h
        vendingmachine.h
)

target_include_directories(VendingMachine
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}   # lets you do: #include <soda.h>
)

set_target_properties(VendingMachine PROPERTIES
    WIN32_EXECUTABLE OFF     # ensure console on Windows
    MACOSX_BUNDLE OFF        # no .app bundle on macOS
)

include(GNUInstallDirs)
install(TARGETS VendingMachine
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
