// http://kaiching.org/pydoing/cpp-guide/unit-9-function.html
// function�о�
#include <iostream>
using namespace std;

// �ŧi(declaration)�禡�쫬
int big(int, int);

int main(void){
    cout << big(22, 11) << " is bigger!";

    return 0;
}

int big(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}