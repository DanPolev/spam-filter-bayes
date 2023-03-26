cmake_minimum_required(VERSION 3.8)

project(tests LANGUAGES CXX)

find_package(Catch2 3 REQUIRED)

set(SRC_EXE tests.cpp
            ${CMAKE_SOURCE_DIR}/src/naive_bayes.cpp
            ${CMAKE_SOURCE_DIR}/src/str_transform.cpp)

add_executable(${PROJECT_NAME} ${SRC_EXE})

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

add_custom_target(testcheck ALL COMMAND ${PROJECT_NAME})
