/**
 *date:20180802
 *filename:05lesson
 *version:1.0
 *author:molly
 *description:��ϰʹ��extern
 */

#include<iostream>
int count;
extern void write_extern();//�ⲿ����
int main()
{
	count = 5;
	write_extern();
	std::cin.get();
	return 0;
}