#include<iostream> 
using namespace std;

int sum(int a[][50], int n)
{
	int b = 0;
	for (int i = 0;i < n;i++)
	{
		b += a[i][i];
	}
	return b;
}

int main()
{
	int n;
	int a[50][50];
	cout << "���������Ľ�����" << endl;
	cin >> n;
	cout << "����������������ֵ��";
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "����Խ��ߵĺ�Ϊ��" << sum(a,n);

}