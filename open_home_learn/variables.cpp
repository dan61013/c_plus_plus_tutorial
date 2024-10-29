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

    // constexpr
    constexpr int A = 10;
    constexpr int B = sizeof(10);
    constexpr int C = sizeof(B);
    // variables.cpp:39:27: error: call to non-'constexpr' function 'int rand()'
    // constexpr int D = rand();
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;

    // unsigned
    unsigned int i;

    auto myChar = "D";
    cout << myChar << endl;
    
    // Error if didn't give the value
    // variables.cpp:52:5: error: declaration of 'auto myNumber' has no initializer
    // auto myNumber;

    return 0;
}
