# Renesas_VSCode_Demo
vscode搭建Renesas开发环境，编译并下载调试

0.Windows下安装pyocd，libusb

(1).pip install pyocd

(2).pip install libusb

1.编辑Config.cmake文件
set(CMAKE_FIND_ROOT_PATH "D:/Tools/GNU Arm Embedded Toolchain/10 2021.10/bin")    //"D:/Tools/GNU Arm Embedded Toolchain/10 2021.10/bin" 替换为自己的路径
