# Renesas_VSCode_Demo
vscode搭建Renesas开发环境，编译并下载调试

0.Windows下安装pyocd，libusb

(1).pip install pyocd

(2).pip install libusb

1.编辑Config.cmake文件

set(CMAKE_FIND_ROOT_PATH "D:/Tools/GNU Arm Embedded Toolchain/10 2021.10/bin")    //"D:/Tools/GNU Arm Embedded Toolchain/10 2021.10/bin" 替换为自己的路径

2.重定向printf输出编译报错问题解决

在cmake/gcc.cmake文件下修改CMAKE_C_LINK_EXECUTABLE和CMAKE_CXX_LINK_EXECUTABLE，添加--specs=nosys.specs

SET(CMAKE_C_LINK_EXECUTABLE "\"${CMAKE_LINKER}\" ${CMAKE_EXE_LINKER_FLAGS} <OBJECTS> -Wl,--start-group ${RASC_CMAKE_EXE_LIBRARY_NAME_FLAGS} -Wl,--end-group --specs=nosys.specs")

SET(CMAKE_CXX_LINK_EXECUTABLE "\"${CMAKE_LINKER}\" ${CMAKE_EXE_LINKER_FLAGS} <OBJECTS> -Wl,--start-group ${RASC_CMAKE_EXE_LIBRARY_NAME_FLAGS} -Wl,--end-group --specs=nosys.specs")
