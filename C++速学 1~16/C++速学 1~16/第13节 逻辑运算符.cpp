#include<iostream>
using namespace std;

#include"函数调用.h"
void main13()
{
	/*非(相当于易语言中的取反（），即取相反结果)*/int a = 10;
	cout << !a << endl;//在C++中，整数型转为逻辑型中，0转为假，其他数字都是真
	cout << !!a << endl;
	/*与(相当于易语言中的且（），即两个条件都成立才为真，一个不成立就是假)，符号为&&*/
	/*或(两个条件成立一个即为真)，符号为||*/
	int a1 = 10;
	int b1 = 10;
	cout << (a1 && b1) << " " << (a1 || b1) << endl;
	b1 = 0;//若a1!=b1（逻辑上的不等而不是数值上的不等）
	cout << (a1 && b1) << " " << (a1 || b1) << endl;
	a1 = 0;//若两个都是假
	cout << (a1 && b1) << " " << (a1 || b1) << "\n" << endl;

	system("pause");
}
