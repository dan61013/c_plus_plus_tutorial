/*
答對題數在 0~10 者，每題給6分。
題數在 11~20 者，從第11題開始，每題給2分。(前10題還是每題給6分)
題數在 21~40 者，從第21題開始，每題給1分。
題數在 40 以上者，一律100分。
該題解法與解答一致
*/
#include <iostream>
using namespace std;

int main()
{
    int num, score;
    
    while(cin >> num)
    {
        score = 0;
        if((num>=0) and (num<=10))
        {
            score += num*6;
        }
        if((num>=11) and (num<=20))
        {
            score += 60 + (num-10)*2;
        }
        if((num>=21) and (num<=40))
        {
            score += 80 + (num-20)*1;
        }
        if(num>=40)
        {
            score = 100;
        }
        cout << score << endl;
    }

    return 0;
}