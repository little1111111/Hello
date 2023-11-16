#include<iostream>
using namespace std;

int main()
{
	const int m = 10;
	const int n = 9;
	int temp;
	int c;
	cout << "请输入常数c的值：";
	cin >> c;
	int a[m];
	int b[n];
	cout << "请输入数组a的值；";
	for (int i = 0;i < m;i++)
	{
		cin >> a[i];
	}
	cout << "请输入数组b的值：";
	for (int j = 0;j < n;j++)
	{
		cin >> b[j];
	}
	for (int i = 1;i < m;i++)                        //对数组a进行排序
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
	for (int i = 0;i < m;i++)                        //对于b中每个元素b[j]在a中查找c-b[j]，如果找到，直接输出。
	{
		for(int j=0;j<n;j++)
		{
			if (a[i] == c - b[j])
			{
				cout << "a["<<i<<"]的值是：" << a[i] << '\t'<<"b["<<j<<"]的值是：" << b[j] << endl;
			}
		}
	}
}