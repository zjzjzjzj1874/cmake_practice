# 最小版本要求
cmake_minimum_required(VERSION 3.12)

# 项目
project(Demo2)

# 添加
aux_source_directory(. DIR_SRCS)

add_executable(Demo ${DIR_SRCS})