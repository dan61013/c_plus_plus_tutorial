#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;

    cout << a << " + " << b << " = " << a + b << endl\
    << a << " - " << b << " = " << a - b << endl\
    << a << " * " << b << " = " << a * b << endl\
    << a << " / " << b << " = " << a / b << endl;

    return 0;
}