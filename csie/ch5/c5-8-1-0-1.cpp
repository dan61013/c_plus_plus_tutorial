// 字元 轉成 整數
// 轉換後的值，可以 直接輸出 或 用變數存起來

#include <iostream>
using namespace std;

int main()
{
    cout << (int)'0' << endl;
    cout << (int)'A' << endl;
    cout << (int)'a' << endl;

    cout << endl;

    cout << (int)'\0' << endl;
    cout << (int)'\t' << endl;
    cout << (int)'\n' << endl;

    return 0;
}