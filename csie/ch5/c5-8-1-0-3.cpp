#include <iostream>
using namespace std;

int main()
{
    char c;
    int trans_c;

    while(cin >> c)
    {
        trans_c = (int)c;

        if(65 <= trans_c and trans_c <= 90)
        {
            cout << (char)(trans_c + 32) << endl;
        }
        else if(97 <= trans_c and trans_c <= 122)
        {
            cout << (char)(trans_c - 32) << endl;
        }
    }
    return 0;
}