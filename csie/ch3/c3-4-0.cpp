// 範例 - 你pass了嗎？
/*輸入一個數字代表成績。
如果成績大於等於60就輸出Pass!。*/
#include <iostream>
using namespace std;

int main()
{
    int grade;

    cin >> grade;

    if (grade >= 60)
    {
        cout << "Pass!" << endl;
    }
    else
    {
        cout << "Fail!" << endl;
    }

    return 0;
}