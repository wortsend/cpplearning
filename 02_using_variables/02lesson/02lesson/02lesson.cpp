/**
 *date:20180802
 *filename:02lesson
 *version:01	
 *author:molly
 *description:练习使用变量,全局变量
 */
#include<iostream>
using namespace std;

int global_val = 25;//全局变量,系统会自动初始化全局变量
int main()
{
	//变量定义
	int a, b;
	int c;
	float f;

	//初始化
	a = 10;
	b = 20;
	c = a + b;
	f = 70 / 3.0;

	//输出
	cout << c << endl << f << endl<<global_val<<endl;
	cin.get();
	return 0;
}