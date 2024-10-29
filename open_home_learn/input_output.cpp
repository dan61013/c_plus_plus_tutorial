#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!\n";
    cout << "Hello World!" << endl;
    (cout << "Hello World!") << endl;

    cerr << "Sorry! World!" << endl;

    // input
    int number = int();
    cout << "Please type an integer: ";
    cin >> number;
    cout << "The number is: " << number << endl;

    return 0;
}
