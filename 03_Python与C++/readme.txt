python安装：
sudo apt-get install python-dev   # for python2.x installs
sudo apt-get install python3-dev  # for python3.x installs
安装路径：
/usr/include/python2.7/Python.h
链接：
g++ call_function.c -I/usr/include/python2.7 -lpython2.7
ps:
g++编译的时候需要告诉他两个东西:
(1)一是到哪里找头文件(-I/usr/include/python2.7), 
(2)二是指定编译当前程序要用到什么库(-lpython2.7)