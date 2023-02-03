#include <iostream>
using namespace std;

int main()
{
    int money[4];
    int i;

    money[0] = 100;
    money[1] = 500;
    money[2] = 1000;
    money[3] = 450;

    i = 0;
    while (i < 4)
    {
        cout << i << " : " << money[i] << endl;
        i += 1;
    }

    return 0;
}