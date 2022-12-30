#include <iostream>
using namespace std;

int main()
{
    int n;
    int num[1005];
    int i;

    // input
    cin >> n;

    for (i=0; i<n; i+=1)
    {
        cin >> num[i];
    }

    // output
    for (i=0; i<n; i+=1)
    {
        cout << num[i] << ' ';
    }
    cout << endl;

    return 0;
}