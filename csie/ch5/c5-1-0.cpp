/*
單選判斷 if - else if - else
在遊戲一開始的選單畫面，玩家可以選擇以下其中一項動作：
　　(1)開始遊戲 (2)讀取進度 (3)遊戲說明 (4)離開遊戲
*/

#include <iostream>
using namespace std;

int main()
{
    int select;

    cout << "請輸入指令:" << endl;
    cin >> select;

    if (select == 1)
        cout << "開始遊戲" << endl;
    else if (select == 2)
        cout << "讀取進度" << endl;
    else if (select == 3)
        cout << "遊戲說明" << endl;
    else if (select == 4)
        cout << "離開遊戲" << endl;
    
    return 0;
}