#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int grade[105];
    int i, x;

    cin >> n >> m;
    
    i = 1;
    while (i <= n)
    {
        cin >> grade[i];
        i += 1;
    }

    i = 1;
    while (i <= m)
    {
        cin >> x;
        cout << grade[x] << endl;
        i += 1;
    }

    return 0;
}