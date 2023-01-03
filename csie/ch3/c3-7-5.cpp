#include <iostream>
using namespace std;

int main()
{
    int n, i;

    while (cin >> n)
    {
        i = 0;
        while (n > 0)
        {
            n /= 10;
            i += 1;
        }
        cout << i << endl;
    }
    
    return 0;
}