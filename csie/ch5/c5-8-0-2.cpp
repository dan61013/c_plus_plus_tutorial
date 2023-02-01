// ifセ
// ッ环琵 a琌砆埃计b琌埃计
// 埃Чぇ埃计砆埃计が传
// 讽埃计0砆埃计(Ω埃计) 碞琌程そ计

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