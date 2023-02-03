#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cin >> n;

    for (i=1; i<=n; i++)
    {
        cout << string(i, '*') << endl;
    }

    return 0;
}