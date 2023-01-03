/*
���@�Ӥ��������a�_���v�T���l�F�C�Ʊ����A�������W���H�h�סA�H�K���T���w�C
���@���ȫD�`�x���A�٦n�{�b�� n �ӧ��@�̡C �F���s�@�F�s�� 1��n,�`�@n�Ӹ��X�P�C
�C�ӧ��@�̦b�h�ײz���e�A�|�o���L�@�Ӹ��X�P�C ���ȵ�����A���@�̧�L�����X�P���٦^�ӡC
�{�b����w���F�A���������O�ä��O�C�ӧ��@�̳����^�ӡC���ǧ��@�̧��P���묹�F�C
�A�����ȬO�ھڥ��٦^�Ӫ����X�P�A��X�����Ǹ��X�P�����@���묹�F�C
Input:
��J�t���h������C �C������2�C�A�Ĥ@�C��2�Ӿ�� n�AR�C
�]1 <= R <= n <= 10000�^n�N��@���h�֭ӧ��@�̡AR�N���^�Ӫ����@�̼ƥءC
���U�Ӫ��@�C��R�Ӿ�ơA�N���^�Ӫ����@�̪����X�P�C
Output:
��C�������X�@�C�C��X�묹�̪����X�P�A�Ѥp��j�ƦC�C�Ъ`�N�A�C�Ӹ��X���᭱�����@�ӪŮ�]�̫�@�ӫ᭱�]���^�C
�p�G�C�ӧ��@�̳����^�ӡA�п�X��W���@�� *
Sample Input:
5 3
3 1 5
6 6
2 3 5 4 1 6
Sample Output:
2 4
*
*/

// �ѵ�
#include <iostream>
using namespace std;

int main()
{
    int n, R;
    int i, man;
    int back[1005];

    while(cin >> n >> R)
    {
        // ���Nback���ٰ}�C�M0
        i = 1;
        while(i <= n)
        {
            back[i] = 0;
            i += 1;
        }

        // ����٪̪��}�C��m�A�ƶq�令1
        i = 0;
        while(i < R)
        {
            cin >> man;
            back[man] = 1;
            i += 1;
        }

        // �p�Gn = R�A�������١A�h��X*
        if(n == R)
        {
            cout << '*' << endl;
        }
        // �_�h��X�묹�̪����X(����0���}�C��m)
        else
        {
            i = 1;
            while(i <= n)
            {
                if(back[i] == 0)
                {
                    cout << i << ' ';
                }
                i += 1;
            }
            cout << endl;
        }
    }

    return 0;
}