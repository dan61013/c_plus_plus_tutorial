#include <iostream>
using namespace std;

int main()
{
    int sex, age;

    while (cin >> sex >> age)
    {
        if (sex == 1)
        {
            if (age >= 18)
            {
                cout << "You are marriageable." << endl;
            }
            else
            {
                cout << "You are NOT marriageable." << endl;
            }
        }
        else if (sex == 2)
        {
            if (age >= 16)
            {
                cout << "You are marriageable." << endl;
            }
            else
            {
                cout << "You are NOT marriageable." << endl;
            }
        }
    }

    return 0;
}