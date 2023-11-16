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
	cout << "请输入矩阵的阶数：" << endl;
	cin >> n;
	cout << "请输入这个矩阵的数值：";
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "矩阵对角线的和为：" << sum(a,n);

}