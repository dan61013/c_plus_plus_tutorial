/*
3n��1�q�Q�O�����C�@�ӥ���ơG
�p�G���O�_�ơA�h�復��3�A�[1�A
�p�G���O���ơA�h�復���H2�A
�p���`���A�̲׳�����o��1�C
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << n << endl;
    while((n>1) and (n<=10000))
    {
        if(n%2==0)
        {
            n /= 2;
            cout << n << endl;
        }
        else if(n%2==1)
        {
            n = (n*3) + 1 ;
            cout << n << endl;
        }
        else if(n==1)
        {
            break;
        }
    }

    return 0;
}