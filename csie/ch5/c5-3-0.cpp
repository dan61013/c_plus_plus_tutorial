// 範例 - 長方形製造機

#include <iostream>
using namespace std;

int main()
{
    int width, height, i;
    
    cout << "請輸入寬:" << endl;
    cin >> width;
    cout << "請輸入高:" << endl;
    cin >> height;

    for (i=1; i<=height; i++)
    {
        cout << string(width, '*') << endl;
    }

    return 0;
}