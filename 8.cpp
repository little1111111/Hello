#include<iostream>
using namespace std;

int main()
{
	const int m = 10;
	const int n = 9;
	int temp;
	int c;
	cout << "�����볣��c��ֵ��";
	cin >> c;
	int a[m];
	int b[n];
	cout << "����������a��ֵ��";
	for (int i = 0;i < m;i++)
	{
		cin >> a[i];
	}
	cout << "����������b��ֵ��";
	for (int j = 0;j < n;j++)
	{
		cin >> b[j];
	}
	for (int i = 1;i < m;i++)                        //������a��������
	{
		for (int j = 0;j < m - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < m;i++)                        //����b��ÿ��Ԫ��b[j]��a�в���c-b[j]������ҵ���ֱ�������
	{
		for(int j=0;j<n;j++)
		{
			if (a[i] == c - b[j])
			{
				cout << "a["<<i<<"]��ֵ�ǣ�" << a[i] << '\t'<<"b["<<j<<"]��ֵ�ǣ�" << b[j] << endl;
			}
		}
	}
}