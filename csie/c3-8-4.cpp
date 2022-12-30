#include <iostream>
using namespace std;

int main()
{
    int N, T;
    int no[99];
    int i;
    int n, t, m;

    cin >> N >> T;
    i = 0;
    
    while (i <= T)
    {
        cin >> n, m, t;
        no[n] = 0;

        if (t == 1)
        {
            no[n] += t;
        }
        else if (t == 2)
        {
            no[n] -= t;
        }
        cout << n << " : " << no[n] << endl;
    }

    return 0;
}