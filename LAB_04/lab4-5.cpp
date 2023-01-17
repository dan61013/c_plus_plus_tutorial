#include <iostream>
using namespace std;

// do while, 至少會執行一次，即使初始值已滿足while條件(False)
int main() {
    int i;
    i = 10;
    
    do {
        cout << i << endl;
        i++;
    }while (i<10);

    return 0;
}