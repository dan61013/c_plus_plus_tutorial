#include <iostream>
#include <string.h>
using namespace std;

// stringlen() �o��r��array����
void get_str_len()
{
    char s[100];
    int len, i;

    while(cin >> s)
    {
        len = strlen(s);

        cout << s << "���׬�: " << len << endl;

        for(i = 0; i < len; i++)
        {
            cout << "��" << i << "�Ӧr��: " << s[i] << endl;
        }
    }
}

int main()
{
    get_str_len();

    return 0;
}