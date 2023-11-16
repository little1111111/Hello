#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[3][3];
	int i, j;
	int p, t, k = 0;
	cout << "请输入一个二维数组:" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		p = a[i][0];
		for (j = 0; j < 3; j++)
		{
			if (p < a[i][j])
			{
				p = a[i][j];
				t = j;//标记最大值所在的位置
			}
		}
		if (p == a[i][0])//该行第一列就是最大值
		{
			t = 0;
		}
		for (i = t; i < 3; i++)//循环该列
		{
			if (p <= a[i][t])
			{
				k = 1;
			}
			else
			{
				k = 2;
				break;//只要有一个值不符合就直接退出该循环
			}
		}
		if (k == 1)
		{
			cout << "数组的鞍点为" << p << endl;
		}
	}
	if (k == 2)//循环结束，没有找到鞍点
	{
	cout<<"这个数组没有鞍点";
	}
	system("pause");
	return 0;
}
