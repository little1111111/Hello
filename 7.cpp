#include<iostream>
#include<cmath>
using namespace std;

void Base_conversion(int m,int n)  //2���ơ�8����
{
	int a[100] = {0};
	int i = 0;
	while(m!=0)
	{
		a[i] = abs(m % n);
		m=m / n;
		i++;
	}
	{
	for (int j = i-1;j >= 0;j--)
		cout << a[j] ;
	}
}
void Base_conversion(int m)      //16����
{
	int a[100] = { 0 };
	int i = 0;
	while (m != 0)
	{
		a[i] = abs(m % 16);
		m = m / 16;
		i++;
	}
	for (int j = i - 1;j >= 0;j--) {
		if (a[j] > 9) {
			switch (a[j])
			{
			case 10:cout<<"A";break;
			case 11:cout << "B";break;
			case 12:cout << "C";break;
			case 13:cout << "D";break;
			case 14:cout << "E";break;
			case 15:cout << "F";break;
			}
		}
		else {
			cout<<a[j];
		}
	}
	
}

int main()
{
	int x,y;
	cout << "������һ��������";
	cin >> x;
	cout << "��������ϣ����ת��Ϊ�����ƣ�";
	cin >> y;
	if (y == 16)
	{
		Base_conversion(x);
	}
	else {
		Base_conversion(x, y);
	}
	return 0;
}