#include<iostream>
using namespace std;

#define b "�곣��"//ע���ˣ����ﲻ���õȺ�
//define��ʹ�÷���Ϊ #define ������ ����ֵ
#define c 123

#include"��������.h"
void main3()
{

	cout << "����b��" << b << "  ����c��" << c << "\n" << endl;//�������b��c��b��c��Դ��4��5�У�
	//b="�������"//���������޸�
	const int d = 99;
	cout << "����d��" << d << "\n" << endl;
	//constΪ���εı���
	//ʹ�÷���Ϊ const �������� ������ ����ֵ
	//�����ĵ�����int��ͬ���ǣ����˸�const
	//�����Ͳ����޸ģ���������Ǵ���ģ�
	//d=0

	system("pause");
}
