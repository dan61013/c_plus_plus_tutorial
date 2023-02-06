// Greedy
#include <iostream>
using namespace std;

int main()
{
    int money[7];
    money[0] = 1000;
    money[1] = 500;
    money[2] = 100;
    money[3] = 50;
    money[4] = 10;
    money[5] = 5;
    money[6] = 1;

    int n, i;

    while(cin >> n)
    {
        cout << n << "=";
        
        for(i = 0; i <= 6; i++)
        {
            if(n >= money[i])
            cout << money[i] << "*" << n / money[i] << " ";
            n = n % money[i];
        }
    }
    cout << endl;
}