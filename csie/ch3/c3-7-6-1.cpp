// 存錢計畫
// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/loop_break.html
#include <iostream>
using namespace std;

int main()
{
    int total_money, month_money;

    total_money = 0;
    while (cin >> month_money)
    {
        total_money += month_money;

        cout << "total_money: " << total_money << endl;
        if (total_money >= 100000)
        {
            break;
        }
    }

    cout << "You can buy it!" << endl;
    
    return 0;
}