#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c)
    {
        if (a+b > c and b+c > a and c+a > b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}