#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[3][3];
	int i, j;
	int p, t, k = 0;
	cout << "������һ����ά����:" << endl;
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
				t = j;//������ֵ���ڵ�λ��
			}
		}
		if (p == a[i][0])//���е�һ�о������ֵ
		{
			t = 0;
		}
		for (i = t; i < 3; i++)//ѭ������
		{
			if (p <= a[i][t])
			{
				k = 1;
			}
			else
			{
				k = 2;
				break;//ֻҪ��һ��ֵ�����Ͼ�ֱ���˳���ѭ��
			}
		}
		if (k == 1)
		{
			cout << "����İ���Ϊ" << p << endl;
		}
	}
	if (k == 2)//ѭ��������û���ҵ�����
	{
	cout<<"�������û�а���";
	}
	system("pause");
	return 0;
}
