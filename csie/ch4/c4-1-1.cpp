/*
����k�v�ɱ`���H�e�R�A�ѩ�L��o�S�֦��K�y�A�]���ͷN���������A�ɱ`�j�ƪ��s�A
�L�Q��o��֤@�I�A�]����F�A�o��q���������L�ιq���ӥ[�ֺ�R���t�סC
�L���e�R�W�h��²��A�W�h�O�o�˪��A��J�@�Ӥ���A�M��̷ӤU���������G
M = ��
D = ��
S = (M*2+D)%3
�o�� S ���ȡA�A�̷� S ���ȱq 0 �� 2 ���O���P "���q"�B"�N"�B"�j�N"���T�ؤ��P���B��
*/
#include <iostream>
using namespace std;

int main()
{
    int m, d, s;

    while(true)
    {
        cin >> m >> d;
        s = (m*2+d)%3;
        if(s == 0)
        {
            cout << "���q" << endl;
        }
        if(s == 1)
        {
            cout << "�N" << endl;
        }
        if(s == 2)
        {
            cout << "�j�N" << endl;
        }
    }

    return 0;
}