#include <iostream>
using namespace std;

int main()
{
    int a1, an, d;
    int i;
    int sum;

    cin >> a1 >> an >> d;
    
    sum = a1;
    i = a1;
    while(i <= an)
    {
        cout << i << " ";
        sum += i;
        
        i += d;
    }
    cout << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}