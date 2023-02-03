// 利用關係運算 判斷字元內容

#include <iostream>
using namespace std;

int main()
{
    char c;

    while(cin >> c)
    {
        if('a' <= c and c <= 'z')
        {
            cout << "是小寫字母" << endl;
        }
        if('A' <= c and c <= 'Z')
        {
            cout << "是大寫字母" << endl;
        }
        if('0' <= c and c <= '9')
        {
            cout << "是數字" << endl;
        }

    }

    return 0;
}