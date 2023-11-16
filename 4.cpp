#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int temp;
	int a[100];
	int n;
	cout << "请输入你要输入数的个数n：" << endl;
	cin >> n;
	cout << "输入你要输入的数：";
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
	cout << "你所输入的数从小到大输出为：";
	for (int i = 0;i <n;i++)
	{
		cout << a[i]<<"  ";
	}
	return 0;
}