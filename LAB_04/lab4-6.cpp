#include <iostream>
using namespace std;

// i預設等於10，while啟動時就滿足條件，所以不會output任何數值
int main() {
    int i;
    i = 10;

    while (i<10){
        cout << i << endl;
        i++;
    }

    return 0;
}