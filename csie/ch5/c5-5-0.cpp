#include <iostream>
using namespace std;

int main()
{
    int num[100];
    int n;
    int i, j, temp;

    // input
    cin >> n;
    for (i=0; i<n; i++)
    {
        cin >> num[i];
    }

    // sort
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    // output
    for (i=0; i<n; i++)
    {
        cout << num[i] << ' ';
    }

    cout << endl;

    return 0;
}