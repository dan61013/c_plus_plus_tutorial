// 輸入任意兩數，將兩數的所有關係運算結果輸出。
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    cout << "a==b : " << (a==b) << endl;
    cout << "a!=b : " << (a!=b) << endl;
    cout << "a>b : " << (a>b) << endl;
    cout << "a>=b : " << (a>=b) << endl;
    cout << "a<b : " << (a<b) << endl;
    cout << "a<=b : " << (a<=b) << endl;

    return 0;
}