#include<iostream>
using namespace std;

#include"函数调用.h"
void main11()
{
	int a = 10;//这个就是我们最常见的赋值
	//加等于
	a += 3;//可以直接理解成a的加数为3
	cout << "a +=" << a << "\n" << endl;
	//减等于、乘等于、除等于我就不一一说明了（看看左边都已经100+行了）
	//摸等于
	a = 10;
	a %= 3;
	cout << "a %=" << a << "\n" << endl;

	system("pause");
}