cmake_minimum_required(VERSION 3.8)

project(naive-bayes-spam-filter VERSION 1.0 LANGUAGES CXX)

option(RUN_TESTING "ENABLE TESTING" OFF)


if (NOT CMAKE_CXX_EXTENSIONS)
        set(CMAKE_CXX_EXTENSIONS OFF)
endif()



set(SRC src/spam_filter.cpp 
        src/naive_bayes.cpp 
        src/str_transform.cpp
	src/mainfuncs.cpp)

add_executable(spam_filter ${SRC})

target_include_directories(spam_filter PRIVATE include)

target_compile_features(spam_filter PRIVATE cxx_std_17)

target_link_libraries(spam_filter PRIVATE pthread)


######## TESTS ########

message(STATUS "${PROJECT_NAME} TESTING - ${RUN_TESTING}")

if(RUN_TESTING)
	add_subdirectory(tests)
endif()

