#include <iostream>
using namespace std;

int main()
{
    int n, height, i, avg;
    int cube[49];

    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        
        else if(n >= 1)
        {
            i = 0;
            while(i < n)
            {
                cin >> height;
                cube[i] = height;
                i += 1;
            }

            i = 0;
            avg = 0;
            while(i < n)
            {
                avg += cube[i];
                i += 1;
            }
            avg /= n;

            i = 0;
            while(i < n)
            {
                if(cube[i] > avg)
                {
                    cout << "The minimun number of moves is " << cube[i] << '.' << endl;
                    break;
                }
                else
                {
                    cout << "The minimum number of moves is 0." << endl;
                    break;
                }
            }
        }
    }

    return 0;
}