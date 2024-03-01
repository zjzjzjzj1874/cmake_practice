# 最低版本要求
cmake_minimum_required(VERSION 3.12)

# 项目信息
project(Demo4)

# CMAKE_INCLUDE_CURRENT_DIR 变量用于控制是否将当前源码目录添加到 include 路径中
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# 添加配置头文件
configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

# 是否使用自定义函数
option (USE_MYMATH
    "Use provided math implementation" ON
)

# 是否加入自定义函数
if (USE_MYMATH)
    include_directories ("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
else()
    LINK_LIBRARIES(m)
endif (USE_MYMATH)

# 查找所有源文件，将名称保存到变量中
aux_source_directory(. DIR_SRCS)

# 生成指定文件
add_executable(Demo ${DIR_SRCS})
# 添加链接库
target_link_libraries(Demo ${EXTRA_LIBS})
