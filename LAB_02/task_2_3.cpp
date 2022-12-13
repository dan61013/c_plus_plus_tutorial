#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "The original number is " << 716.54564 << endl;
    // 列出3位數 717
    cout << "The number with set precision 3 is " << setprecision(3) << 716.54564 << endl;
    // 列出6位數(包含小數點) 716.546
    cout << "The number with set precision 6 is " << setprecision(6) << 716.54564 << endl;
    // 設定寬度:10, 顯示6位數 (showpoint -> 會靠右對齊，預設顯示6個有效數)
    cout << "The number in showpoint decimal notation is " << setw(10) << showpoint << setprecision(6)\
    << 716.54564 << endl;
    // 設定寬度:10, fixed -> 只顯示小數後6位數 716.545640
    cout << "The number in fix-point decimal notation is " << setw(10) << fixed << setprecision(6)\
    << 716.54564 << endl;
    // 設定寬度:10, scientific -> 以科學記號顯示
    cout << "The number in exponential notation is " << setw(10) << scientific << setprecision(3)\
    << 716.54564 << endl;

    return 0;
}