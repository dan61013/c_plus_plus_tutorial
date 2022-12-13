#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float a = 15;
    double b = 25.9876;
    /* 先用fixed固定成小數點表示法，然後showpoint幫忙補0到小數後第六位，
    setprecision把小數點固定到第二位，所以小數第三位以後通通刪去，
    所以setprecision是拿來設定浮點數，不是整數(因為精準)*/
    cout << fixed << showpoint << setprecision(2) << a << endl;
    cout << fixed << showpoint << setprecision(2) << b << endl;

    return 0;
}