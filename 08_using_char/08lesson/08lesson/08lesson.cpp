/**
 *date:20180803
 *filename:08lesson
 *version:1.0
 *author:molly
 *description:��ϰʹ���ַ���
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

	//����str1 ��str3
	strcpy_s(str3, str1);
	cout << "strcpy(str3,str1): " << str3 << endl;

	//����str1��str2
	strcat_s(str1, str2);
	cout << "strcat(str1,str2): " << str1 << endl;

	//���Ӻ�str1���ܳ���
	len = strlen(str1);
	cout << "strlen(str1): " << len << endl;
	cin.get();
	return 0;
}