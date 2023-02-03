// https://www.csie.ntu.edu.tw/~b98902112/cpp_and_algo/cpp/practice_is_multiple.html
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter the value for intA and intB:" << endl;

    while (cin >> a >> b){
        if (a % b == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}