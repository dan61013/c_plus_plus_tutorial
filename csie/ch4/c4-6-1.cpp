#include <iostream>
using namespace std;

int main()
{
    int h[60];
    int n, sum, avg, ans, i;
    
    cin >> n;
    
    sum = 0;
    for(i=0; i < n; i+=1)
    {
        cin >> h[i];
        sum += h[i];
    }

    avg = sum/n;
    ans = 0;
    for(i=0; i < n; i+=1)
    {
        if(avg > h[i])
        {
            ans += avg - h[i];
        }
        if(avg < h[i])
        {
            ans += h[i] - avg;
        }
    }
    ans /= 2;

    cout << "The minimun number of moves is " << ans << ".\n" << endl;

    return 0;
}