#include <iostream>
using namespace std;

int main()
{
    int num;

    while(cin >> num)
    {
        if (not(num == 4 or num == 13))
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}