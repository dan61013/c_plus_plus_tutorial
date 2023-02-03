#include <iostream>
using namespace std;

int main()
{
    char s[55];
    int n;

    while(cin >> s >> n)
    {
        s[n] = '\0';
        cout << s << endl;
    }

    return 0;
}