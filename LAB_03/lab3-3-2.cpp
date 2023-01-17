#include <iostream>
using namespace std;
// ­×§ïlab_03_03.cpp±ø¥ó¡Aand -> or
int main() {
    int x;
    cout << "Please enter one number: " << endl;
    cin >> x;

    if ((x >= 5) or (x < 2))
    {
        cout << "Hit" << endl;
    }
    else
    {
        cout << "x = " << x << " is not in range" << endl;
    }

    return 0;
}