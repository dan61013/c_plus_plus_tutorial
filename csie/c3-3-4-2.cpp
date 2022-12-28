/*
題目 - 剩多少錢?
輸入錢包裡原本有多少錢、某一商品的價格，請輸出買完該商品之後錢包剩多少錢。假設錢包的錢大於等於該商品價格。

Input1: 100 25, Output1: 75
Input1: 311246 25452, Output1: 285794
*/
#include <iostream>
using namespace std;

int main()
{
    int wallet, product;
    cout << "請輸入錢包裡的金額及商品價格: " << endl;
    cin >> wallet >> product;
    cout << wallet - product << endl;

    return 0;
}