// 思考問題：變數交換
#include <iostream>
using namespace std;

int main()
{
    int a = 60, b = 80;

    a = b;
    b = a;

    cout << a << " " << b << endl;

    return 0;
}