#include<iostream>
using namespace std;

#include"函数调用.h"
void main8()
{
	//其实我更喜欢叫做逻辑型
	bool flag = true;//真
	cout << "真：" << flag << "\n" << endl;//输出1
	flag = false;//假
	cout << "假：" << flag << "\n" << endl;//输出0
	//由输出结果易猜测，bool占1字节
	cout << "逻辑型所占空间：" << sizeof(flag) << "\n" << endl;

	system("pause");
}
