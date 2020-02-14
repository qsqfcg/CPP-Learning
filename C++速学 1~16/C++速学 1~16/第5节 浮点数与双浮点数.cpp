#include<iostream>
using namespace std;

#include"函数调用.h"
void main5()
{
	//其实我更习惯叫做单浮点和双浮点（双精度小数）
	float f1 = 2.423f;//一般后面加一个f，代表它是一个浮点数，如果你把鼠标移到数字上面的话他会显示(float)2.423000097F
	//float f2 = 2.423;//如果不加f的话，把鼠标移到数字上面的话他会显示(double)2.423000000000000043；同样，VS错误列表也会显示警告
	cout << "f1数值：" << f1 << "\n" << endl;
	double d1 = 41.1542524;
	cout << "f2数值：" << d1 << "\n" << endl;
	//浮点数占用空间4字节
	//双浮点数占用空间8字节

	system("pause");
}
