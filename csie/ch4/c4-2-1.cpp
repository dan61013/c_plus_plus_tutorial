/*
�Y�@�Ӳɤl���@��t�שM���[�t�סC���]�b t ��ᦹ�ɤl���t�׬� v �A�аݳo�Ӳɤl�b 2t ���Ҹg�L���Z���O�h�֡C
Input:
�C�մ��ո��1�C�A��2�Ӿ�ơA���O�N�� v�]-100 <= v <=100�^�M t�]0 <= t <= 200�^�C
Output:
��C�մ��ո�ƽп�X�o�Ӳɤl�b 2t ���Ҹg�L���Z���O�h�֡C
Sample input:
0 0
5 12
Sample Output:
0
120
*/
#include <iostream>
using namespace std;

int main()
{
    // v=at, a=v/t
    // s=1/2at^2, �N�Ja, t�N�J2t
    // s=2vt
    int t, v;
    while(cin >> t >> v)
    {
        cout << 2*v*t << endl;
    }

    return 0;
}