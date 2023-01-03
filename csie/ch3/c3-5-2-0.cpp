#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2;
    
    while (cin >> grade1 >> grade2)
    {
        if (grade1 >= 60 and grade2 >= 60)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    return 0;
}