#include <iostream>
using namespace std;

int main() {
    int x, y;
    // variable not assignment
    cout << "x= " << x << endl; // 4201536
    cout << "y= " << y << endl; // 6422400
    // assignment y = 25, but x not
    y = 25;
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    // assigment x = 10
    x = 10;
    cout << "current value of x is " << x++ << endl; // 10, x���B�z�A++
    cout << "current value of x is " << ++x << endl; // 12, �e�� x++ = 11, ++x = 12
    cout << "current value of x is " << x << endl; // ������� x = 12

    return 0;
}