#include <iostream>
using namespace std;

void two_to_power() {
    int num = 1;

    cout << "Two to power of 0: " << num << endl;

    num = num << 1;
    cout << "Two to power of 0: " << num << endl;

    num = num << 1;
    cout << "Two to power of 1: " << num << endl;

    num = num << 1;
    cout << "Two to power of 2: " << num << endl;

    num = num << 1;
    cout << "Two to power of 3: " << num << endl;
}

void xor_example() {
    char ch = 'A';

    cout << "Before encoding: " << ch << endl;

    ch = ch ^ 0x7;
    cout << "After encoding: " << ch << endl;

    ch = ch ^ 0x7;
    cout << "Decoding: " << ch << endl;
}

void checking_positive() {
    int input = 0;

    cout << "Please type the positive integer: ";
    cin >> input;
    cout << "Is the typing number odd?\n"
         << (input & 1 ? 'Y' : 'N')
         << endl;
}

int main() {
    int num = 100;
    cout << (num > 90 && num < 200) << endl;
    cout << (num > 100 && num < 150) << endl;
    cout << (num > 110 || num <350) << endl;

    // or
    cout << "0 or 0 -> " << (0 | 0) << endl;
    cout << "0 or 1 -> " << (0 | 1) << endl;
    cout << "1 or 1 -> " << (1 | 1) << endl;

    // xor
    cout << "0 xor 0 -> " << (0 ^ 0) << endl;
    cout << "0 xor 1 -> " << (0 ^ 1) << endl;
    cout << "1 xor 0 -> " << (1 ^ 0) << endl;
    cout << "1 xor 1 -> " << (1 ^ 1) << endl;

    // not
    cout << "not 0 -> " << (! 0) << endl;
    cout << "not 1 -> " << (! 1) << endl;

    checking_positive();
    xor_example();
    two_to_power();

    return 0;
}