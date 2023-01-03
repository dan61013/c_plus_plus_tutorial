/*
3n＋1猜想是指對於每一個正整數：
如果它是奇數，則對它乘3再加1，
如果它是偶數，則對它除以2，
如此循環，最終都能夠得到1。
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << n << endl;
    while((n>1) and (n<=10000))
    {
        if(n%2==0)
        {
            n /= 2;
            cout << n << endl;
        }
        else if(n%2==1)
        {
            n = (n*3) + 1 ;
            cout << n << endl;
        }
        else if(n==1)
        {
            break;
        }
    }

    return 0;
}