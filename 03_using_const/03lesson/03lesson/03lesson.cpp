/**
 *date:20180802
 *filename:03lesson
 *version:1.0
 *author:molly
 *description:��ϰʹ�ó������궨��
 */

#include<iostream>
#include<cmath>
using namespace std;
#define LENGTH 10 //�궨��
#define WIDTH 5  //�궨��
#define NEWLINE '\n'//�궨��

int main()
{
	int area = LENGTH*WIDTH;
	cout << area;
	cout << NEWLINE;
	//����
	const float RADIUS = 20.0;
	const float PI = 3.14;//������ö���Ϊ��д��ʽ
	float area_circle = pow(RADIUS,2)*PI;//��Բ�����
	cout << area_circle;
	cin.get();
	return 0;
}