#include <iostream>
using namespace std;

int main() {
    int num = 100;
    cout << (num > 90 && num < 200) << endl;
    cout << (num > 100 && num < 150) << endl;
    cout << (num > 110 || num <350) << endl;

    return 0;
}