/**
 *date:20180803
 *filename:06lesson
 *version:1.0
 *author:molly
 *description:函数中引用的使用
 */
#include<iostream>
using namespace std;

void swap(int &x, int &y)//函数的定义和声明
{
	int temp;
	temp = x;
	x = y;
	y = temp;//利用中间变量交换两个数
	return;
}

int main()
{
	int a = 100;
	int b = 400;
	cout << "交换前的a和b：" << a << "  " << b << endl;
	//调用函数
	swap(a, b);
	cout << "交换后的a和b: " << a << "  " << b << endl;
	cin.get();
	return 0;
}