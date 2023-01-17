/*
範例1 - 網咖算帳 (有回傳值函式)
洛亞網咖收費標準如下:
前三小時，每小時30元
第四小時起，每小時20元
*/
#include <iostream>
using namespace std;

int pay(int hour)
{
    if (hour<=3)
    {
        return hour*30;
    }
    else
    {
        return 3*30 + (hour-3)*20;
    }
}

int main()
{
    int n;

    while (cin >> n)
    {
        cout << pay(n) << endl;
    }

    return 0;
}