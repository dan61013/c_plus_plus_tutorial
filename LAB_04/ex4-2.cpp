#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int input;
    int i, j; // i: input���j�ܼơFj: prime�P�_�ܼ�
    
    cout << "Enter an integer value: " << endl;
    cin >> input;

    cout << "All prime numbers below " << input << " are: " << endl;

    if ((input <= 0) or (input == 1))
    {
        cout << "None" << endl;
    }
    else if (input == 2)
    {
        for (i=1; (i<=input); i++)
        {
            cout << 2 << endl;
        }
    }
    else if (input >= 3)
    {
        cout << "2 3 "; // input >= 3, �hprime�@�w�|��2 and 3
        for (i = 2; (i <= input); i++)
        {
            for (j = 2; (j*j <= i); j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                else if (j + 1 > sqrt(i))
                {
                    cout << i << ' ';
                }
            }
        }
    }

    return 0;
}