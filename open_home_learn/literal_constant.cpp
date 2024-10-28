#include <iostream>
using namespace std;

int main() {
    // default data type when write an int value
    cout << "sizeof(1):\t" << sizeof(1) << "\n";
    cout << "sizeof(1.0):\t" << sizeof(1.0) << "\n";

    // Carry system
    cout << 26 << "\n";  // decimal
    cout << 032 << "\n";  // Octal
    cout << 0x1A << "\n";  // Hexadecimal
    cout << 0b11010 << "\n";  // Binary

    return 0;
}
