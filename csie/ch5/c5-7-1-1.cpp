// Fibonacci 迴圈版

#include <iostream>
using namespace std;

int main()
{
    long long fib[75];
    int n, i;

    fib[1] = 1;
    fib[2] = 1;

    // 預存所有的資料
    for (i=3; i<=70; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // 直接取出數值
    while (cin >> n)
    {
        cout << fib[n] << endl;
    }

    return 0;
}