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
            cout << "�Y�N�n��J�Ʀr�}�Y���F��" << endl;
        }
        if('a' <= c and c <= 'z')
        {
            cout << "�Y�N�n��J�p�g�r���}�Y���F��" << endl;
        }

        cin >> s;
        cin.get();
        cout << "��J�F:" << s << endl;
    }
}

int cin_getline()
{
    char s[105];

    while(true)
    {
        cin.getline(s, 100);
        cout << "�o��: " << s << endl;
    }
}

int main()
{
    // cin_peek();

    cin_getline();

    return 0;
}