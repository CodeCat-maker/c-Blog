cmake_minimum_required(VERSION 3.21)

project(blog)

set(CMAKE_CXX_FLAGS "-std=c++17" )

#添加根目录
aux_source_directory(. DIR_SRCS)

#添加UTILS子目录
add_subdirectory(UTILS)

# 指定生成目标
add_executable(Demo ${DIR_SRCS})

target_link_libraries(Demo UTILSFUNCTIONS)