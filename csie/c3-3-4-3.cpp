/*
題目 - 等我一下
「再等我20分鐘！」小鈴一邊打扮說著。

「每次等妳出門都好久-_-」小鳴無奈。

「那等我1200秒好了。」小鈴改口。

「ok！」小鳴覺得秒比分快多了，立刻答應。雖然再過30秒，他就會懊悔這件事了。


因為每次小鳴都搞不清楚秒數和小時、分、秒的對應關係，請你寫一個程式幫他一下吧！

輸入說明
一個正整數N，代表秒數

輸出說明
輸出 N 秒等於 幾小時(hr) 幾分(min) 幾秒(sec)

input1 734, output1 0 hr 12 min 14 sec
input1 3751, output1 1 hr 2 min 31 sec
*/
#include <iostream>
using namespace std;

// Answer
int main()
{
    int input;
    int h, m, s;

    cin >> input;

    h = input/3600;
    input = input%3600;

    m = input/60;
    input = input%60;

    s = input;

    cout << h << " hr " << m << " min " << s << " sec" << endl;

    return 0;
}

// 這是我自己寫的
// int main()
// {
//     int second;
//     cin >> second;
//     cout << second/3600 << " hr " << second/60%60 << " min " << (second%3600 - (60*(second/60%60))) 
//     << " sec" << endl;

//     return 0;
// }