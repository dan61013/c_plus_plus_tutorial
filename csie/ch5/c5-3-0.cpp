// �d�� - ����λs�y��

#include <iostream>
using namespace std;

int main()
{
    int width, height, i;
    
    cout << "�п�J�e:" << endl;
    cin >> width;
    cout << "�п�J��:" << endl;
    cin >> height;

    for (i=1; i<=height; i++)
    {
        cout << string(width, '*') << endl;
    }

    return 0;
}