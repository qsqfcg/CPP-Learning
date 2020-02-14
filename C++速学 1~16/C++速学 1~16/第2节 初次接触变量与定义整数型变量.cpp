#include <iostream>
using namespace std;

#include"函数调用.h"
void main2()
{
	int a = 666;//创建一个变量a，赋值为666
	cout << "a = " << a << "\n" << endl;//输出变量a
	a = 999;//变量可以再次修改，常量不可以（见第三节）
	cout << "a = " << a << "\n" << endl;//输出变量a

	system("pause");
}
