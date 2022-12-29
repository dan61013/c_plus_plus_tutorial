// 題目 - 找出n的所有因數
// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/practice_print_all_factor.html
#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num, i = 1;
        cout << "Enter a number:" << endl;
        cin >> num;
        
        while (i <= num)
        {
            if (num % i == 0)
            {
                cout << i << ' ';
            }
            i++;
        }
        cout << endl;
    }

    return 0;
}