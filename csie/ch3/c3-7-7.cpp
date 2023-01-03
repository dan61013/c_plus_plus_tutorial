/*
�D�� - Feynman

���e:
�O�� (Richard Phillips Feynman) �O�@�Ӧ��W�����ꪫ�z�Ǯa�οը������z���o�D�C�L�D��z�ת��z�íҾɶq�l�q���C�L���X�ݫn���̭Ӥ�A�b����t���èɨ����a�ͬ��C�L�����W�@�u�O�x�F�A�O�ҥ��͡v�Ρu�A�ާO�H���Q�v���]�]�t�F�L�b���D�H�n���g���C

�L�@�ͪ��ݦn�O�ѤΫإ����D�B��B�αK�X�C�̪�A���b1949�~���ݶO�Ҫ��@��n���ѹA�ҧ��@�ǾګH�ݩ�o��~�����z�Ǯa�����O�C�b�o�Ǧ������l�ιq�ϾǪ����O���A�����@�i�\�y�ȡA�W�g����²�檺���D�G�u�b�@�� N ��N ����椤�t���X�Ӥ��P������ΡH�v

�U�����{�F���\�y�ȤW���ϡA��� N=2 �ɵ��׬� 5�C

Input:
��J���Y�z������A�C���@��A�t���@�Ӿ�� N�A�N���檺��� (1 ? N ? 100)�C

��J�������H�t���@�ӹs���@���ܡC

Output:
���C������A�A���{������X�ӵ�����@�@�]�t�X�Ӥ��P������Ω�@��C

Sample Input
2
1
8
0

Sample Output
5
1
204
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i, ans;

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        
        ans = 0;
        i = 0;
        while (i < n)
        {
            ans += (n-i)*(n-i);

            i += 1;
        }
        cout << ans << endl;
    }

    return 0;
}