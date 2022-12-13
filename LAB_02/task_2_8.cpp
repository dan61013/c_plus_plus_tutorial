#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float num;

    cout << "Please enter the base floating-point number:" << endl;
    cin >> num;

    cout << "10 to the power of 1, 2, 3 and 4 are:" << endl;
    cout << setw(12) << fixed << setprecision(3) << num << endl;
    cout << setw(12) << fixed << setprecision(3) << pow(num, 2) << endl;
    cout << setw(12) << fixed << setprecision(3) << pow(num, 3) << endl;
    cout << setw(12) << fixed << setprecision(3) << pow(num, 4) << endl;

    return 0;
}