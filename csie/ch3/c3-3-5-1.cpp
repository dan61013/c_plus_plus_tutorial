/* 
題目 - 多項式計算
給你a, b, c及X，請你算出aX^2+bX+c的值。

輸入說明
題目有多筆輸入

每一列: 4個整數 a, b, c, X

輸出說明
對每一列輸出 ans=aX^2+bX+c

input
1 2 3 4
0 0 100 20
1 0 0 11

output
ans=27
ans=100
ans=121
*/
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c ,x;

    while ( cin >> a >> b >> c >> x)
    {
        cout << "ans = " << a*pow(x, 2) + b*x + c << endl;
    }

    return 0;
}