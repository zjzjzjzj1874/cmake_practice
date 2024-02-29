# cmake_practice
cmake practice to learn

## Cmake使用
在demo下面，创建一个build文件夹，专门用于存放生成的build文件和可执行文件，操作如下：
```shell
cd demo1 # 进入demo1文件夹

mkcd build   # 创建文件夹并进入，没有mkcd请自行安装

cmake .. # 构建demo1

make

./Demo 2 10 # 根据生成的可执行文件运行
```

## 项目结构
### [demo1](./demo1)
单个源文件构建
### [demo2](./demo2)
同一目录多个源文件构建
### [demo3](./demo3)
多个目录多个源文件构建

## CMake
- [官方文档](https://cmake.org/documentation/)
- [帮助文档](https://cmake.org/cmake/help/latest/)
- [Modern CMake简体中文教程](https://modern-cmake-cn.github.io/Modern-CMake-zh_CN/)
- [CMake中文网](http://www.cmake.org.cn/)
- [Github：cmake-project](https://github.com/myhhub/cmake-project?tab=readme-ov-file)
- [CMake环境变量](https://www.cnblogs.com/xianghang123/p/3556425.html)
- [CMake从入门到应用](https://aiden-dong.github.io/2019/07/20/CMake%E6%95%99%E7%A8%8B%E4%B9%8BCMake%E4%BB%8E%E5%85%A5%E9%97%A8%E5%88%B0%E5%BA%94%E7%94%A8/)