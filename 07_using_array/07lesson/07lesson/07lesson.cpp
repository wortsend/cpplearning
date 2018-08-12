/**
 *date:20180803
 *filename:07lesson
 *version:1.0
 *author:molly
 *description:数组的应用
 */

#include<iostream>
using namespace std;
#include<iomanip>
using std::setw;

int main()
{
	int n[10];//包含10个整数的数组
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100;//设置i为i+100
	}
	cout << "element" << setw(13) << "value" << endl;
	//输出元素中每个元素的值
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}
	cin.get();
	return 0;
}