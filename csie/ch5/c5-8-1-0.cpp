// ASCII���X��
// �� ���32~126 ��Ū�� char ��X

#include <iostream>
using namespace std;

int main()
{
    int i;

    for(i=32; i <= 126; i++)
    {
        cout << i << " " << char(i) << endl;
    }

    return 0;
}