// http://kaiching.org/pydoing/cpp-guide/unit-9-function.html
#include <iostream>
using namespace std;

void PrintInt(int);
void PrintNewLine(void);

int main(void){
    int i = 10;
    PrintNewLine();
    while (i > 0)
    {
        PrintInt(i);
        i--;
    }
    PrintNewLine();

    return 0;
}

void PrintInt(int a){
    cout << a << endl;
}

void PrintNewLine(void){
    cout << endl;
}