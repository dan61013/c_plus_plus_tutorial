/*
我是個超級電視迷，但是我不喜歡固定看一個頻道，我經常在不同頻道間轉來轉去。
我的狗咬壞了我的遙控器，現在數字鍵都不能用了，只剩兩個按鈕可以換頻道，一個往上切一個頻道 (△ 按鈕)，
一個往下切一個頻道 (▽ 按鈕)。這樣真的很煩，因為如果我要從頻道 3 換到頻道 9 我得按 6 次 △ 按鈕。
我的電視有 100 個頻道，號碼為 0 到 99。它們是循環的，也就是從 99 台再按一下 △ 就會回到第 0 台。
同理，從第 0 台按一下 ▽ 就會回到 99 台。
幫我寫個程式，讓我輸入現在正在看的頻道和我要切過去的頻道，它便告訴我最少需要按幾次按鈕。
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    int ans1, ans2;

    while(cin >> a >> b)
    {
        if((a == -1) and (b == -1))
        {
            break;
        }

        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        ans1 = b - a;
        ans2 = a + (100-b);
        if(ans1 < ans2)
        {
            cout << ans1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }

    return 0;
}