#include <iostream>
using namespace std;

int main()
{
    int height, standard = 185;
    cout << "Please enter your height: " << endl;
    cin >> height;
    cout << "Your height different from standard(185cm) is : " << (standard - height) << " cm" << endl;

    return 0;
}