#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int temp;
	int a[100];
	int n;
	cout << "��������Ҫ�������ĸ���n��" << endl;
	cin >> n;
	cout << "������Ҫ���������";
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i < n;i++)
	{
		for (int j = 0;j < n - i;j++)
		{
			if (a[j] > a[j+ 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	cout << "�������������С�������Ϊ��";
	for (int i = 0;i <n;i++)
	{
		cout << a[i]<<"  ";
	}
	return 0;
}