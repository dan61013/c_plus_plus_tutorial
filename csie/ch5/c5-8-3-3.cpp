#include <iostream>
#include <string.h>
using namespace std;

// stringlen() 得到字串array長度
void get_str_len()
{
    char s[100];
    int len, i;

    while(cin >> s)
    {
        len = strlen(s);

        cout << s << "長度為: " << len << endl;

        for(i = 0; i < len; i++)
        {
            cout << "第" << i << "個字元: " << s[i] << endl;
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
            cout << "順序正確" << endl;
        }
        if(result == 0)
        {
            cout << "兩字完全相同" << endl;
        }
        if(result == 1)
        {
            cout << "順序相反" << endl;
        }
    }
}

int main()
{
    // get_str_len();

    str_order_compare();

    return 0;
}