/*
���ϥΪ̿�J�@�ӥ����N�A�A�̤U�C�����X���G�G
a) �Y N �㰣 2�A�h��X 2 ������
b) �Y N ������ a) �����p���㰣 3�A�h��X 3 ������
c) �Y N ���ŦX�H�W�����p�A�h��X �D2 �� 3 ������
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n%2 == 0)
        cout << "2������" << endl;
    else if (n%3 == 0)
        cout << "3������" << endl;
    else
        cout << "�D2��3������" << endl;

    return 0;
}