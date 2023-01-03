#include <iostream>
using namespace std;

int main()
{
    int money;
    int min = 0;

    cin >> money;
    while (money >= 39)
    {
        money -= 39;

        cout << min << ":00 Eric ate a hambuger." << endl;
        cout << "    money : " << money << endl;

        min += 5;
    }

    return 0;
}