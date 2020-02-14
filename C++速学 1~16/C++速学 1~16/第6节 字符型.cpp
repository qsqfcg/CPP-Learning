#include<iostream>
using namespace std;

#include"函数调用.h"
void main6()
{
	//其实我更习惯叫做字节型，因为它只占用1字节
	char c1 = 'a';//这里只能使用单引号
	//char c1 = "a";//否则会报错
	//char c1 = 'abc';//上文说到只有1字节，所以说文本长度只能是1，否则会出现一大堆乱七八糟的错误和警告
	cout << "a对应的ASCII编码：" << (int)c1 << "\n" << endl;//如果你想知道字母a对应的ASCII编码的话可以将其转换成数字

	system("pause");
}
