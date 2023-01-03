#include <iostream>
using namespace std;

int main()
{
    int n, a, b, i;

    cout << "Enter the number of students:" << endl;
    cin >> n;

    i = 1;
    while (i <= n)
    {
        cin >> a >> b;
        cout << a + b << endl;

        i++;
    }

    return 0;
}