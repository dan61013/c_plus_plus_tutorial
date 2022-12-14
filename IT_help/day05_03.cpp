#include <iostream>
using namespace std;

int main() {
    for(auto x = 0; x <= 10; x++){
        if(x * 2 == 50){
            cout << "The anser of x is " << x << endl;
            break;
        } else continue;
    }

    return 0;
}