#include <iostream>
using namespace std;

int main() {
    auto x = 0;

    do{
        cout << "請輸入數值: " << endl;
        cin >> x;
        // x小於0時，重新輸入
        if (x < 0)
        {
            cout << "你輸入的數值小於0，請重新輸入" << endl;
        } 
        // x大於0時，輸出數值並結束
        else if(x >=0)
        {
            cout << "你輸入的值: " << x << endl;
            break;
        }
    }while(x < 0);

    return 0;
}