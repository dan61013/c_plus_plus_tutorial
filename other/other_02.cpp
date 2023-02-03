// https://openhome.cc/Gossip/CppGossip/ifStatement.html

#include <iostream>
using namespace std;

int main() {
    int input = 0;

    cout << "Input Integer: " << endl;
    cin >> input;

    int remain = input % 2;

    if (remain == 1)
        cout << input << " is odd. " << endl;
    else
        cout << input << " is even. " << endl;

    return 0;
}