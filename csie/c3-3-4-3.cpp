/*
�D�� - ���ڤ@�U
�u�A����20�����I�v�p�a�@�䥴�껡�ۡC

�u�C�����p�X�����n�[-_-�v�p��L�`�C

�u������1200��n�F�C�v�p�a��f�C

�uok�I�v�p��ı�o�����֦h�F�A�ߨ赪���C���M�A�L30��A�L�N�|�Ү��o��ƤF�C


�]���C���p�ﳣ�d���M����ƩM�p�ɡB���B���������Y�A�ЧA�g�@�ӵ{�����L�@�U�a�I

��J����
�@�ӥ����N�A�N����

��X����
��X N ���� �X�p��(hr) �X��(min) �X��(sec)

input1 734, output1 0 hr 12 min 14 sec
input1 3751, output1 1 hr 2 min 31 sec
*/
#include <iostream>
using namespace std;

// Answer
int main()
{
    int input;
    int h, m, s;

    cin >> input;

    h = input/3600;
    input = input%3600;

    m = input/60;
    input = input%60;

    s = input;

    cout << h << " hr " << m << " min " << s << " sec" << endl;

    return 0;
}

// �o�O�ڦۤv�g��
// int main()
// {
//     int second;
//     cin >> second;
//     cout << second/3600 << " hr " << second/60%60 << " min " << (second%3600 - (60*(second/60%60))) 
//     << " sec" << endl;

//     return 0;
// }