/**
 *date:20180802
 *filename:05lesson
 *version:1.0
 *author:molly
 *description:练习使用extern
 */

#include<iostream>
int count;
extern void write_extern();//外部函数
int main()
{
	count = 5;
	write_extern();
	std::cin.get();
	return 0;
}