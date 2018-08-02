/**
 *date:20180802
 *filename:03lesson
 *version:1.0
 *author:molly
 *description:练习使用常量，宏定义
 */

#include<iostream>
#include<cmath>
using namespace std;
#define LENGTH 10 //宏定义
#define WIDTH 5  //宏定义
#define NEWLINE '\n'//宏定义

int main()
{
	int area = LENGTH*WIDTH;
	cout << area;
	cout << NEWLINE;
	//常量
	const float RADIUS = 20.0;
	const float PI = 3.14;//常量最好定义为大写形式
	float area_circle = pow(RADIUS,2)*PI;//求圆的面积
	cout << area_circle;
	cin.get();
	return 0;
}