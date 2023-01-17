/*
讓使用者輸入一個正整數N，再依下列條件輸出結果：
a) 若 N 整除 2，則輸出 2 的倍數
b) 若 N 不滿足 a) 的狀況但整除 3，則輸出 3 的倍數
c) 若 N 不符合以上的狀況，則輸出 非2 或 3 的倍數
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n%2 == 0)
        cout << "2的倍數" << endl;
    else if (n%3 == 0)
        cout << "3的倍數" << endl;
    else
        cout << "非2或3的倍數" << endl;

    return 0;
}