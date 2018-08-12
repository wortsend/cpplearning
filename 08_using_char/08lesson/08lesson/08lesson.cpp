/**
 *date:20180803
 *filename:08lesson
 *version:1.0
 *author:molly
 *description:练习使用字符串
 */

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[11] = "hello";
	char str2[11] = "world";
	char str3[11];
	int len;

	//复制str1 到str3
	strcpy_s(str3, str1);
	cout << "strcpy(str3,str1): " << str3 << endl;

	//连接str1和str2
	strcat_s(str1, str2);
	cout << "strcat(str1,str2): " << str1 << endl;

	//连接后str1的总长度
	len = strlen(str1);
	cout << "strlen(str1): " << len << endl;
	cin.get();
	return 0;
}