#include<iostream>
using namespace std;

#include"函数调用.h"
void main15()
{
	int a = 0;
	string t = "";
	//B站上面教程分成了3节课，我就直接一节整合吧
	cout << "残酷点，如果你是理科生，高考估分多少？" << endl;
	cin >> a;
	if (a >= 495)//如果a≥495，那么可能上本一线
	{
		cout << "2019的福建本一线可能就上了呢！\n" << endl;
	}
	else//反之，则激励
	{
		cout << "虽然估得不高，但我相信你能上2019的福建本一线！\n" << endl;
	}
	//上面仅限于理科生来讲，那难道不给文科生活路吗？
	cout << "确认下你是什么类型的学生\n  A.文科生  B.理科生" << endl;
	cin >> t;
	if (t == "A")//如果ta确认为文科生
	{
		//重复的东东不必多说
		cout << "请给你的高考分数估一下" << endl;
		cin >> a;
		if (a >= 550)//如果a≥550，那么可能上本一线
		{
			cout << "2019的福建本一线可能就上了呢！\n" << endl;
		}
		else//反之，则激励
		{
			cout << "虽然估得不高，但我相信你能上2019的福建本一线！\n" << endl;
		}
	}
	else if (t == "B")//如果ta确认的不是文科生而是理科生
	{
		//重复的东东不必多说
		cout << "请给你的高考分数估一下" << endl;
		cin >> a;
		if (a >= 495)//如果a≥495，那么可能上本一线
		{
			cout << "2019的福建本一线可能就上了呢！\n" << endl;
		}
		else//反之，则激励
		{
			cout << "虽然估得不高，但我相信你能上2019的福建本一线！\n" << endl;
		}
	}
	else//如果ta确认的不是文科生→且ta也不是理科生(输入的不是A或者B)
	{
		cout << "我无法理解“" << t << "”是什么选项\n" << endl;
	}
	//可能大多数新人看到这些if else会懵，理解下下面这些就行了
	//┌·if①(是文科生)
	//│└文科生估分
	//└┬·if②(是理科生)//不是文科生确定后开始新的if，是①的else
	//  │└理科生估分
	//  └既不是文科生也不是理科生，判断输入选项错误，是②的else
	//小节练习题：输入3个数字，用if对这三个数字进行比较。预期效果如下：
	//输入100
	//输入400
	//输入10
	//输出10<100<400或输出400>100>10
	//有兴趣的同学可以试着做下两数相等的判断或三数相等的判断

	system("pause");
}
