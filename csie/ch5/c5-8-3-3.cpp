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

int main()
{
    get_str_len();

    return 0;
}