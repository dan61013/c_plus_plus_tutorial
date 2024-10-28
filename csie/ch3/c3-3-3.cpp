// revise the variable value
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << "When x = 10 : " << x*(100-x)*(3*x+5) << endl;

    x = 30;
    cout << "When x = 30 : " << x*(100-x)*(3*x+5) << endl;

    x = 100;
    cout << "When x = 100 : " << x*(100-x)*(3*x+5) << endl;

    return 0;
}