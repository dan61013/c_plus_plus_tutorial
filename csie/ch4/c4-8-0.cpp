// ��]�Ƥ���
// �D��: �� output �ܦ��O 120 = 2^3 * 3^1 * 5^1 ���Φ�
#include <iostream>
using namespace std;

int main()
{
    int n, i, times;

    cin >> n;
    
    i = 2;
    while(n > 1)
    {
        times = 0;
        while(n % i == 0)
        {
            times += 1;
            n /= i;
        }
        if(times >= 1)
        {
            cout << i << '^' << times << ' ';
        }
        i += 1;
    }
    
    return 0;
}