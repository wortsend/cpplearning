/**
 *date:20180802
 *filename:02lesson
 *version:01	
 *author:molly
 *description:��ϰʹ�ñ���,ȫ�ֱ���
 */
#include<iostream>
using namespace std;

int global_val = 25;//ȫ�ֱ���,ϵͳ���Զ���ʼ��ȫ�ֱ���
int main()
{
	//��������
	int a, b;
	int c;
	float f;

	//��ʼ��
	a = 10;
	b = 20;
	c = a + b;
	f = 70 / 3.0;

	//���
	cout << c << endl << f << endl<<global_val<<endl;
	cin.get();
	return 0;
}