#include <iostream>
using namespace std;

int main()
{
    int hr, min;

    while (cin >> hr >> min)
    {
        if ((hr == 7 and min >= 30) or (hr >= 8 and hr <= 16))
        {
            cout << "At school" << endl;
        }
        else
        {
            cout << "Out school" << endl;
        }
    }

    return 0;
}