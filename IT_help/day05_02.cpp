#include <iostream>
using namespace std;

// for迴圈
int main() {

    for(auto x = 0; x <= 10; x++){
        if(x + 2 == 10){
            cout << "The answer is " << x << endl;
            break;
        } else continue;
    }

    return 0;
}