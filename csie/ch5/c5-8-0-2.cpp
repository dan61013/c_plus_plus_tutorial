// �Kif����
// �û��� a�O�Q���ơBb�O����
// ��������A���ơB�Q���Ƥ���
// ���Ƭ�0�A�Q����(�W�@��������) �N�O�̤j���]��

#include <iostream>
using namespace std;

int main() {
    int a, b, t;

    while(cin >> a >> b){
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        cout << a << endl;
    }

    return 0;
}