// 金字塔製造機

#include <iostream>
using namespace std;

int main()
{
    int n, i, x;

    cin >> n;
    x = (n*2 - 1);

    for (i=1; i<=x; i+=2)
    {
        cout << string((x-i)/2, ' ') << string(i, '*') << endl;
    }

    return 0;
}