/*
�����D�Ʀb 0~10 �̡A�C�D��6���C
�D�Ʀb 11~20 �̡A�q��11�D�}�l�A�C�D��2���C(�e10�D�٬O�C�D��6��)
�D�Ʀb 21~40 �̡A�q��21�D�}�l�A�C�D��1���C
�D�Ʀb 40 �H�W�̡A�@��100���C
���D�Ѫk�P�ѵ��@�P
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