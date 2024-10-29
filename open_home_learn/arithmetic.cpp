#include <iostream>
using namespace std;

int main() {
    cout << 1 + 2 + 3 / 4 << endl;
    cout << (1 + 2 + 3) / 4 << endl;
    cout << rand() % 100 << endl;

    // conversion
    int number = 10;
    cout << number / 3 << endl;

    // Implicit conversion
    double numberDouble = 10.0;
    // 3 -> 3.0 (Arithmetic conversion)
    cout << numberDouble / 3 << endl;

    int num = 10;
    double x = num;
    // output -> 10
    cout << x << endl;

    int a = 0;
    double b = 3.14;
    a = b;
    // output -> 3
    cout << a << endl;

    // Explicit conversion
    int c = 10;
    int d = 3;
    cout << c / d << endl;
    // cast syntax
    cout << (double)c / d << endl;
    // or
    cout << double(c) / d << endl;
    // static_cast
    cout << static_cast<double>(c) / b << endl;

    return 0;
}