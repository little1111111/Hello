#include<iostream>
using namespace std;

int factorial(int a)
{
	int b = 1;
	while (a>1)
	{
		b *= a;
		a--;
	}
	return b;
}

int main()
{
	int x;
	int result;
	cout << "请输入一个数：" << endl;
	cin >> x;
	result = factorial(x);
	cout << x << "!=" << result;
	
}