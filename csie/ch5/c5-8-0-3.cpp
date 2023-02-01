// 遞迴版
// 利用遞迴讓 被除數(a)、除數(b) 互換

#include <iostream>
using namespace std;

int f(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return f(b, a % b);
}

int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        cout << f(a, b) << endl;
    }

    return 0;
}