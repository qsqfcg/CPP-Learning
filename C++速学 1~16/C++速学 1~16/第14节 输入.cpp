#include<iostream>
using namespace std;

#include"函数调用.h"
void main14()
{
	int a = 0;
	string t = "";
	//在教程里面应该是放在前面的，我不小心忘了，反正下面要讲逻辑，现在讲也不迟
	cout << "请输入一个你喜欢的数字" << endl;
	cin >> a;//cin >> 存放数据的变量
	cout << "你喜欢的数字是：" << a << endl;
	cout << "请输入一个你喜欢的字母" << endl;
	cin >> t;//cin >> 变量类型不仅限于整数型，也可以是文本型
	cout << "你喜欢的字母是：" << t << "\n" << endl;

	system("pause");
}
