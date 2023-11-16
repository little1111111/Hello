#include <iostream>
#include<cmath>
using namespace std;

//判断是否为素数
bool prime(int b)
{
    int c = sqrt((float)b);
    for (int i = 2;i <= c;i++)
    {
        if (b % i == 0)                    //输入的数能被某个数整除 
        {
            break;
        }
        if (i > c)
        {
            return 1;                    //输出1表示当前输入的b为素数
        }
        else return 0;                   //输出0表示不是素数
    }

}

//验证哥德巴赫猜想
void verify(int& x)
{
    int a=0, b=0;
    for (int i = 2;i <= x/ 2;i++)
    {
        if (prime(i))
        {
            a = i;
            b = x - i;
            if (prime(b))
            {
                break;
            }
        }
    }
    cout << x << "=" << a<<"+"<< b << endl;

}

int main()
{
    int x;
    cout << "请输入一个大于6的偶数:" << endl;
    cin >> x;
    verify(x);
}


