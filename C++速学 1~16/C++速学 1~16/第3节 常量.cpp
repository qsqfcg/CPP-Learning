#include<iostream>
using namespace std;

#define b "宏常量"//注意了，这里不是用等号
//define的使用方法为 #define 常量名 常量值
#define c 123

#include"函数调用.h"
void main3()
{

	cout << "常量b：" << b << "  常量c：" << c << "\n" << endl;//输出常量b和c（b、c来源见4、5行）
	//b="出错代码"//常量不可修改
	const int d = 99;
	cout << "常量d：" << d << "\n" << endl;
	//const为修饰的变量
	//使用方法为 const 数据类型 变量名 变量值
	//与上文单纯的int不同的是，加了个const
	//变量就不可修改（下面代码是错误的）
	//d=0

	system("pause");
}
