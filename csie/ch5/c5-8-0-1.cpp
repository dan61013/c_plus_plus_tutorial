// �����ȤW���B��
// �`�O�����j���ư��H���p����
// ���䤤�@���ܦ�0�A�t�~�@�ӼƴN�O�̤j���]��

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        while(a!=0 and b!=0)
        {
            if(a >= b)
            {
                a %= b;
            }
            else if(b > a)
            {
                b %= a;
            }
        }

        if(a >= b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }

    return 0;
}