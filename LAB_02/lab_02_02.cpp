#include <iostream>
using namespace std;

int main() {
    int num01 = 2;

    cout << num01++ << endl;
    cout << num01++*2 <<endl; // (2+1)*2 = 6
    cout << ++num01 << endl; // 
    cout << ++num01*2 << endl;
    return 0;
}