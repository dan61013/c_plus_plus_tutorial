/*
�@�}�l�NMoney�}�C���M��(0)�A�̷ӥ�����O�i��s���ʧ@�C
*/

#include <iostream>
using namespace std;

int main()
{
    int N, T;
    int n, t, m;
    int money[105];

    int i;

    cin >> N;
    cin >> T;

    // ��money[]�M0
    i = 0;
    while(i < N)
    {
        money[i] = 0;
        i += 1;
    }

    i = 0;
    while(i < T)
    {
        cin >> n >> t >> m;
        if(t == 2)
        {
            money[n] -= m;
        }
        if(t == 1)
        {
            money[n] += m;
        }

        i += 1;
    }

    i = 0;
    while(i < N)
    {
        cout << i << " : " << money[i] << endl;
        i += 1;
    }

    return 0;
}