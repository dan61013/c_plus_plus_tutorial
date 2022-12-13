#include <iostream>
using namespace std;

int main() {
    int intResult;
    float fltResult;

    intResult = 7/3;
    fltResult = 7/3;
    cout << intResult << endl; // 整數除法=2#
    cout << fltResult << endl; // 整數除法=2#

    intResult = int(12.6/3);
    fltResult = 12.6/3;
    cout << intResult << endl; // 用int取出整數=4#
    cout << fltResult << endl; // float相除後顯示到小數第一位=4.2#

    return 0;
}