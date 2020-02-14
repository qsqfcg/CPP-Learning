#include<iostream>
using namespace std;

#include"函数调用.h"
void main7()
{
	//其实我更习惯叫做文本型
	/*1 C语言风格*/
	char t1[] = "hello world(C)";
	cout << t1 << "\n" << endl;
	/*2 C++风格*/
	string t2 = "hello world(C++)";
	cout << t2 << "\n" << endl;

	system("pause");
}
