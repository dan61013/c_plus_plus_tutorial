// https://openhome.cc/Gossip/CppGossip/ifStatement.html
// if案计耞

#include <iostream>
using namespace std;

int main() {
    int input = 0;

    cout << "叫块俱计: " << endl;
    cin >> input;

    int remain = input % 2;

    if (remain == 1)
        cout << input << "计" << endl;
    else
        cout << input << "案计" << endl;

    return 0;
}