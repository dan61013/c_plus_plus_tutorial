#include <iostream>
using namespace std;

int main()
{
    int n;
    int num[105];
    int i;
    int ans_min, ans_max;

    cin >> n;
    i = 0;
    while (i < n)
    {
        cin >> num[i];
        i += 1;
    }

    ans_min = 20000;
    ans_max = 0;
    i = 0;

    while (i < n)
    {
        if (num[i] > ans_max)
        {
            ans_max = num[i];
        }
        if (num[i] < ans_min)
        {
            ans_min = num[i];
        }
        i += 1;
    }

    cout << ans_max << ' ' << ans_min << endl;

    return 0;
}