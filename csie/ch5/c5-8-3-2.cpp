#include <iostream>
using namespace std;

int cin_peek()
{
    string s;
    char c;

    while(true)
    {
        c = cin.peek();

        if('0' <= c and c <='0')
        {
            cout << "即將要輸入數字開頭的東西" << endl;
        }
        if('a' <= c and c <= 'z')
        {
            cout << "即將要輸入小寫字母開頭的東西" << endl;
        }

        cin >> s;
        cin.get();
        cout << "輸入了:" << s << endl;
    }
}

int cin_getline()
{
    char s[105];

    while(true)
    {
        cin.getline(s, 100);
        cout << "得到: " << s << endl;
    }
}

int main()
{
    // cin_peek();

    cin_getline();

    return 0;
}