// ex3-2
#include <iostream>
using namespace std;

int main() {
    char choose;
    int qty;

    cout << "Welcome to the book-buying system!!\n" << 
    "The following are the list and cost: \n" << 
    "(A) Computer Science: An overview      $30\n" <<
    "(B) Absoulte C++        $20\n" <<
    "(C) C++ How to Programming  $40\n" <<
    "Please enter A, B, C to choose the book: " << endl;
    cin >> choose;

    cout << "Now enter the quantity of the books." << endl;
    cin >> qty;

    switch (choose)
    {
    case 'A':
        cout << "The total cost of item (" << choose << ") is $" << (30*qty) << 
        ". Thanks for your coming." << endl;
        break;
    
    case 'B':
        cout << "The total cost of item (" << choose << ") is $" << (20*qty) << 
        ". Thanks for your coming." << endl;
        break;

    case 'C':
        cout << "The total cost of item (" << choose << ") is $" << (40*qty) << 
        ". Thanks for your coming." << endl;
        break;
    
    default:
        cout << "Sorry, item (" << choose << ") doesn't on our list. " << endl;
        break;
    }

    return 0;
}