/* 
�D�� - �ڷQ����
�C�ӤH�����ߥؤ��ڷQ�������C

���p��N�ڷQ�۪���185cm�C

�ЧA���ݤp�����L���ڷQ�ٮt�h���C

��J����
�@�ӥ���ơA�N��p��ثe������(<=185)

��X����
�p�����ڷQ�ٮt�h��cm�C

input1: 150, output1: �A�ٮt 35 cm
input1: 169, output1: �A�ٮt 16 cm
*/
#include <iostream>
using namespace std;

int main()
{
    int height, standard = 185;
    cout << "Please enter your height: " << endl;
    cin >> height;
    cout << "�A�ٮt " << (standard - height) << " cm" << endl;

    return 0;
}