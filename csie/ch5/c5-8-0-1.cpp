// 家览笲衡
// 羆琌耕计埃耕计
// 讽ㄤい计跑Θ0计碞琌程そ计

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        while(a!=0 and b!=0)
        {
            if(a >= b)
            {
                a %= b;
            }
            else if(b > a)
            {
                b %= a;
            }
        }

        if(a >= b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }

    return 0;
}