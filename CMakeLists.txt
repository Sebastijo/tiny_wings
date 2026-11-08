cmake_minimum_required(VERSION 3.28)
project(TinyWings LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.1.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(TinyWings 
    src/main.cpp
    src/logic/Utils.cpp
    src/objects/Player.cpp
    src/objects/World.cpp
    src/logic/Game.cpp
    src/logic/GameEvents.cpp
    src/logic/GameRender.cpp
    src/logic/GameUpdate.cpp
)
target_include_directories(TinyWings PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(TinyWings PRIVATE cxx_std_20)
target_link_libraries(TinyWings PRIVATE SFML::Graphics)


set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT TinyWings)
