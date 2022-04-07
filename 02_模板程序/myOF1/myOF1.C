#include "fvCFD.H"   //fvCFD.H功能多，包含大部分OF自定义的类型

int main(int argc, char *argv[])
{
    #include "setRootCase.H"//检查算例文件夹结构是否完整，不完整则报错。主要检查0/U、system/controlDict等文件是否存在
	  
  Info << "This is my own first test case" << nl;   //主代码

    return 0;
}