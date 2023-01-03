#include <iostream>
using namespace std;

int main()
{
    int n, height[99], i;

    cin >> n;

    for (i=0; i<n; i+=1)
    {
        cin >> height[i];
    }

    for (i=n-1; i>=0; i-=1)
    {
        cout << height[i] << endl;
    }

    return 0;
}