#include<iostream>
using namespace std;

#include"函数调用.h"
void main12()
{
	bool _bool = false;
	/*相等于*/cout << (7 == 8) << endl;
	_bool = 7 == 8;//比较结果是逻辑型的
	cout << _bool << "\n" << endl;
	/*不等于*/cout << (7 != 8) << endl;
	/*大于*/cout << (7 > 8) << endl;
	/*小于*/cout << (7 < 8) << endl;
	/*大于或等于*/cout << (7 >= 8) << endl;
	/*小于或等于*/cout << (7 <= 8) << "\n" << endl;

	system("pause");
}
