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

void str_order_compare()
{
    char s1[100], s2[100];
    int result;

    while(cin >> s1 >> s2)
    {
        result = strcmp(s1, s2);

        if(result == -1)
        {
            cout << "���ǥ��T" << endl;
        }
        if(result == 0)
        {
            cout << "��r�����ۦP" << endl;
        }
        if(result == 1)
        {
            cout << "���Ǭۤ�" << endl;
        }
    }
}

int main()
{
    // get_str_len();

    str_order_compare();

    return 0;
}