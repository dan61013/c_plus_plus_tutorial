#include <iostream>
using namespace std;

int main()
{
    int a = 60, b = 80, temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << ' ' << b << endl;

    return 0;
}