#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float a = 15;
    double b = 25.9876;
    cout << fixed << showpoint << setprecision(2) << a << endl;
    cout << fixed << showpoint << setprecision(2) << b << endl;

    return 0;
}