// ASCII表輸出器
// 把 整數32~126 解讀成 char 輸出

#include <iostream>
using namespace std;

int main()
{
    int i;

    for(i=32; i <= 126; i++)
    {
        cout << i << " " << char(i) << endl;
    }

    return 0;
}