#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float a = 15;
    double b = 25.9876;
    /* ノfixed㏕﹚Θ计翴ボ猭礛showpoint腊Γ干0计材せ
    setprecisionр计翴㏕﹚材┮计材硄硄
    ┮setprecision琌ㄓ砞﹚疊翴计ぃ琌俱计(弘非)*/
    cout << fixed << showpoint << setprecision(2) << a << endl;
    cout << fixed << showpoint << setprecision(2) << b << endl;

    return 0;
}