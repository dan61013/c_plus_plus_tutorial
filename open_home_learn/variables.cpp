// Variable supply the memory space with having name.
#include <iostream>
using namespace std;

int main() {
    int age;
    double money;

    // Assignment Operator
    int ageForStudent = 15;
    double scoreForStudent = 88.6;
    char levelForStudent = 'A';

    // Or
    int ageForDan(29);

    cout << "The student age is: " << ageForStudent << endl;
    cout << "The student score is: " << scoreForStudent << endl;
    cout << "The student level is: " << levelForStudent << endl;

    cout << "The Dan's age is: " << ageForDan << endl;

    // Constructor
    int luckyNumber = int();
    cout << "The lucky number is: " << luckyNumber << endl;

    // list initialization
    int maxNumber{100};
    cout << "The maximum number is: " << maxNumber << endl;

    // use const keyword, the variable can't be modified
    const double PI = 3.14159;
    // PI = 3.14;

    return 0;
}
