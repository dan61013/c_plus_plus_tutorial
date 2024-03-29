/*
題目 - Feynman

內容:
費曼 (Richard Phillips Feynman) 是一個有名的美國物理學家及諾貝爾物理獎得主。他主攻理論物理並倡導量子電腦。他曾訪問南美十個月，在那兒演講並享受熱帶生活。他的成名作「別鬧了，費曼先生」及「你管別人怎麼想」中也包含了他在赤道以南的經歷。

他一生的嗜好是解及建立謎題、鎖、及密碼。最近，曾在1949年接待費曼的一位南美老農夫找到一些據信屬於這位年輕物理學家的筆記。在這些有關介子及電磁學的筆記中，夾有一張餐巾紙，上寫有個簡單的謎題：「在一個 N ×N 的方格中含有幾個不同的正方形？」

下面重現了該餐巾紙上的圖，顯示 N=2 時答案為 5。

Input:
輸入有若干筆測資，每筆一行，含有一個整數 N，代表方格的邊長 (1 ? N ? 100)。

輸入的結束以含有一個零的一行表示。

Output:
對於每筆測資，你的程式須輸出該筆測資一共包含幾個不同的正方形於一行。

Sample Input
2
1
8
0

Sample Output
5
1
204
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i, ans;

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        
        ans = 0;
        i = 0;
        while (i < n)
        {
            ans += (n-i)*(n-i);

            i += 1;
        }
        cout << ans << endl;
    }

    return 0;
}