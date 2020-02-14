#include<iostream>
using namespace std;

#include"函数调用.h"
void main4()
{
	//变量的名字必须以下划线_和字母开头
	//数字、汉字都不能作为开头

	//short短整数，占用空间2字节，范围-32768～32767
	//int整数，占4字节
	//long长整数，win4字节，Linux32为4字节，64位8字节
	//longlong长长整数，8字节

	cout << "整数型所占内存空间：" << sizeof(int) << "\n" << endl;
	//sizeof用于取变量所占空间
	//用法 sizeof(数据类型/变量)

	system("pause");
}
