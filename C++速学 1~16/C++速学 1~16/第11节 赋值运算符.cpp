#include<iostream>
using namespace std;

#include"��������.h"
void main11()
{
	int a = 10;//���������������ĸ�ֵ
	//�ӵ���
	a += 3;//����ֱ������a�ļ���Ϊ3
	cout << "a +=" << a << "\n" << endl;
	//�����ڡ��˵��ڡ��������ҾͲ�һһ˵���ˣ�������߶��Ѿ�100+���ˣ�
	//������
	a = 10;
	a %= 3;
	cout << "a %=" << a << "\n" << endl;

	system("pause");
}