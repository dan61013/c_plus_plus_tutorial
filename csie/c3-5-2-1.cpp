#include <iostream>
using namespace std;

int main()
{
    int credit, money;

    while (cin >> credit >> money)
    {
        if (credit >= 12980 or money >= 12980)
        {
            cout << "PS4" << endl;
        }
        else
        {
            cout << "QQ" << endl;
        }
    }

    return 0;
}