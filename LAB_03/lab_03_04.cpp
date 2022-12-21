#include <iostream>
using namespace std;

int main() {
    float score;
    char grade;
    cout << "Enter your score: " << endl;
    cin >> score;
    
    // const char -> "", char -> ''
    if (score >= 80.0 and score <= 100.0)
        grade = 'A';
    else if (score >= 70.0 and score < 80)
        grade = 'B';
    else if (score >= 60.0 and score < 70)
        grade = 'C';
    else if (score < 60.0 and score >= 0)
        grade = 'F';
    else
        grade = 'F';

    cout << "You get level " << grade << endl;

    return 0;
}