/*
�ڬO�ӶW�Źq���g�A���O�ڤ����w�T�w�ݤ@���W�D�A�ڸg�`�b���P�W�D�������h�C
�ڪ����r�a�F�ڪ��������A�{�b�Ʀr�䳣����ΤF�A�u�Ѩ�ӫ��s�i�H���W�D�A�@�ө��W���@���W�D (�� ���s)�A
�@�ө��U���@���W�D (�� ���s)�C�o�˯u���ܷСA�]���p�G�ڭn�q�W�D 3 �����W�D 9 �ڱo�� 6 �� �� ���s�C
�ڪ��q���� 100 ���W�D�A���X�� 0 �� 99�C���̬O�`�����A�]�N�O�q 99 �x�A���@�U �� �N�|�^��� 0 �x�C
�P�z�A�q�� 0 �x���@�U �� �N�|�^�� 99 �x�C
���ڼg�ӵ{���A���ڿ�J�{�b���b�ݪ��W�D�M�ڭn���L�h���W�D�A���K�i�D�ڳֻ̤ݭn���X�����s�C
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    int ans1, ans2;

    while(cin >> a >> b)
    {
        if((a == -1) and (b == -1))
        {
            break;
        }

        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        ans1 = b - a;
        ans2 = a + (100-b);
        if(ans1 < ans2)
        {
            cout << ans1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }

    return 0;
}