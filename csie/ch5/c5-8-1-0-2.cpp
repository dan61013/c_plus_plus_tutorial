// �Q�����Y�B�� �P�_�r�����e

#include <iostream>
using namespace std;

int main()
{
    char c;

    while(cin >> c)
    {
        if('a' <= c and c <= 'z')
        {
            cout << "�O�p�g�r��" << endl;
        }
        if('A' <= c and c <= 'Z')
        {
            cout << "�O�j�g�r��" << endl;
        }
        if('0' <= c and c <= '9')
        {
            cout << "�O�Ʀr" << endl;
        }

    }

    return 0;
}