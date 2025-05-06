cmake_minimum_required(VERSION 3.10)
project(Test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(test)

target_sources(test PRIVATE
    main.cc 
    "${PROJECT_SOURCE_DIR}/src/Mytime.cc"
    "${PROJECT_SOURCE_DIR}/src/CountCmdNumber.cc" 
    "${PROJECT_SOURCE_DIR}/src/Exit.cc" 
)

target_include_directories(test PRIVATE 
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/system"
    "${PROJECT_SOURCE_DIR}/common"
)