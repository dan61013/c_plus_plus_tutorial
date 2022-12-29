#include <iostream>
using namespace std;

int main()
{
    int i = 128;

    while (i >= 1)
    {
        cout << i << ' ';
        i /= 2;
    }

    return 0;
}