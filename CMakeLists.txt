cmake_minimum_required(VERSION 3.28)
project(IHateUnityTime)

set(CMAKE_CXX_STANDARD 20)

add_library(IHateUnityTime SHARED library.cpp)

if(MSVC)
    target_compile_definitions(IHateUnityTime PUBLIC "API=extern \"C\" __declspec(dllexport)")
else()
    target_compile_definitions(IHateUnityTime PUBLIC "API=extern \"C\"")
endif()