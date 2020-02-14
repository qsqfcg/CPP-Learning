#include<iostream>
using namespace std;

#include"函数调用.h"
void main16()
{
	//相当于易语言中的选择
	//表达式1 ? 表达式2 : 表达式3
	//如果表达式返回真，执行表达式2并返回结果；如果表达式返回假，执行表达式3并返回结果
	int a1 = 10;
	int b1 = 20;
	int c1 = 0;
	c1 = a1 > b1 ? a1 : b1;//易得，a1 > b1为假，返回变量b1，即等效于c1 = b1
	cout << "c1 = " << c1 << "\n" << endl;
	//由于返回的是变量，所以可以对其进行赋值
	(a1 > b1 ? a1 : b1) = 999;//()的作用是先执行括号内的表达式。等效于b1 = 999
	cout << "b1 = " << b1 << "\n" << endl;

	system("pause");
}
