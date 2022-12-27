// http://kaiching.org/pydoing/cpp-guide/unit-9-function.html
// function教學
#include <iostream>
using namespace std;

// 宣告(declaration)函式原型
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