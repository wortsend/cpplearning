/**
 *date:20180803
 *filename:06lesson
 *version:1.0
 *author:molly
 *description:���������õ�ʹ��
 */
#include<iostream>
using namespace std;

void swap(int &x, int &y)//�����Ķ��������
{
	int temp;
	temp = x;
	x = y;
	y = temp;//�����м��������������
	return;
}

int main()
{
	int a = 100;
	int b = 400;
	cout << "����ǰ��a��b��" << a << "  " << b << endl;
	//���ú���
	swap(a, b);
	cout << "�������a��b: " << a << "  " << b << endl;
	cin.get();
	return 0;
}