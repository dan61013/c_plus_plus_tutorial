#include <iostream>
using namespace std;

int main()
{
    int n, left, right;
    int max, min;
    int i, k, k_temp;
    int ans, length;

    while(cin >> left >> right)
    {
        cout << left << ' ' << right << ' ';
        if(left > right)
        {
            max = left;
            min = right;
        }
        else
        {
            max = right;
            min = left;
        }

        ans = 0;
        k = min;
        while(k <= max)
        {
            length = 1;

            k_temp = k;
            while(k_temp != 1)
            {
                if(k_temp%2 == 0)
                {
                    k_temp /= 2;
                }
                else
                {
                    k_temp = (k_temp*3) + 1;
                }
                length += 1;
            }

            if(ans<length)
            {
                ans = length;
            }

            k += 1;
        }

        cout << ans << endl;
    }

    return 0;
}