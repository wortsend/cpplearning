/**
 *date:20180803
 *filename:07lesson
 *version:1.0
 *author:molly
 *description:�����Ӧ��
 */

#include<iostream>
using namespace std;
#include<iomanip>
using std::setw;

int main()
{
	int n[10];//����10������������
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100;//����iΪi+100
	}
	cout << "element" << setw(13) << "value" << endl;
	//���Ԫ����ÿ��Ԫ�ص�ֵ
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}
	cin.get();
	return 0;
}