#include <iostream>
using namespace std;
/*while迴圈
while(1)代表是無限迴圈*/

int main() {
    auto x = 0;

    while(1){
        x++; // x++要在前面，否則不會自動執行
        // if 2x等於50
        if(x * 2 == 50){
            // 輸出x
            cout << "The answer of x is " << x << endl;
            // 結束
            break;
        } else continue;
    }

    return 0;
}