#include <iostream>
using namespace std;

int main() 
{
    // 1. ���w�q�n��J���ƭȤΰj��ƭ�
    int input;
    int i, j;
    // ����user��J��r
    cout << "Enter the size of multiplication table(1~9): " << endl;
    cin >> input;
    // �P�_input�p�󵥩�9�~����j��
    if (input<=9) 
    {
        // for i * j (�E�E���k��)
        for (i=1; (i<=input) ; i++) 
        {
            for (j=1; (j<=input); j++)
            {
                // ��\t, tab���q
                cout << i << " * " << j << " = " << (i*j) << "\t";
            }
            cout << endl;
        }
    }
    // ���b1~9�d�򤺪���ܴ���
    else 
    {
        cout << "The size of multiplication table should be 1~9." << endl;
    }

    return 0;
}