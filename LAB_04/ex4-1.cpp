#include <iostream>
using namespace std;

int main() 
{
    // 1. 先定義好輸入的數值及迴圈數值
    int input;
    int i, j;
    // 提示user輸入文字
    cout << "Enter the size of multiplication table(1~9): " << endl;
    cin >> input;
    // 判斷input小於等於9才執行迴圈
    if (input<=9) 
    {
        // for i * j (九九乘法表)
        for (i=1; (i<=input) ; i++) 
        {
            for (j=1; (j<=input); j++)
            {
                // 用\t, tab分段
                cout << i << " * " << j << " = " << (i*j) << "\t";
            }
            cout << endl;
        }
    }
    // 不在1~9範圍內的顯示提示
    else 
    {
        cout << "The size of multiplication table should be 1~9." << endl;
    }

    return 0;
}