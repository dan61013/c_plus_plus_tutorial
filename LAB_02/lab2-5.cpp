#include <iostream>
using namespace std;

int main() {
    int intResult;
    float fltResult;

    intResult = 7/3;
    fltResult = 7/3;
    cout << intResult << endl; // ��ư��k=2#
    cout << fltResult << endl; // ��ư��k=2#

    intResult = int(12.6/3);
    fltResult = 12.6/3;
    cout << intResult << endl; // ��int���X���=4#
    cout << fltResult << endl; // float�۰�����ܨ�p�ƲĤ@��=4.2#

    return 0;
}