#include <iostream>
using namespace std;

// multiple if
int main() {
    float score;
    char grade;

    cout << "Enter your score: " << endl;
    cin >> score;

    if ((score>=80.0) and (score<=100))
        grade = 'A';
    if ((score>=70.0) and (score<80))
        grade = 'B';
    if ((score>=60.0) and (score<70))
        grade = 'C';
    if ((score<60.0) and (score>=0))
        grade = 'F';
    
    cout << "You get level " << grade << endl;

    return 0;
}