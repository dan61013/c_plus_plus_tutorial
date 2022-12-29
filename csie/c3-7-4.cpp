// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/practice_isprime.html
// 題目 - 判斷質數
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, i, counter;

    while (cin >> num)
    {
        counter = 0;

        i = 1;
        while (i < num)
        {
            if (num % i == 0)
            {
                counter += 1;
            }
            i += 1;
        }

        if (counter == 2)
        {
            cout << "Yes" << endl;
        }
        else if (num <= 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}