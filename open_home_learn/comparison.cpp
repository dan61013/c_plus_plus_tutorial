#include <iostream>
using namespace std;

int main() {
    cout << "10 > 5\t\t" << (10 > 5) << endl;
    cout << "10 < 5\t\t" << (10 < 5) << endl;

    // Conditional Operator
    int score = 0;
    cout << "Type the student score: ";
    cin >> score;
    cout << "Does the student pass?\n"
         << (score >= 60 ? "Y" : "N")
         << endl;

    return 0;
}
