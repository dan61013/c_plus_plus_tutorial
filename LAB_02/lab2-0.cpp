#include <iostream>
using namespace std;

int main() {
    int a = 3001, b = 99; // 與Python相同，可以一行命名多變數 & 值
    int var = 2.99; //因為型態是int，所以只會顯示出"2"

    cout << "a + b = " << a + b << "\nvar = " << var << endl;
    cout << "sum: " << float(4*3+7/5-25.5) << endl; //用括號轉換輸出型態，run時執行
    return 0;
}