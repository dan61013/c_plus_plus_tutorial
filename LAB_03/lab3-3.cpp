#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Please enter one number: " << endl;
    cin >> x;
    // and ���� &&, or ���� ||, not���� !
    if ((x >= 5) and (x < 2))
    {
        cout << "Hit" << endl;
    }
    else
    {
        cout << "x = " << x << " is not in range" << endl;
    }

    return 0;
}