/* 
�D�� - �h�����p��
���Aa, b, c��X�A�ЧA��XaX^2+bX+c���ȡC

��J����
�D�ئ��h����J

�C�@�C: 4�Ӿ�� a, b, c, X

��X����
��C�@�C��X ans=aX^2+bX+c

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