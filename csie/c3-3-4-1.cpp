/* 
題目 - 我想長高
每個人都有心目中夢想的身高。

像小鳴就夢想著長到185cm。

請你算算看小鳴離他的夢想還差多遠。

輸入說明
一個正整數，代表小鳴目前的身高(<=185)

輸出說明
小鳴離夢想還差多少cm。

input1: 150, output1: 你還差 35 cm
input1: 169, output1: 你還差 16 cm
*/
#include <iostream>
using namespace std;

int main()
{
    int height, standard = 185;
    cout << "Please enter your height: " << endl;
    cin >> height;
    cout << "你還差 " << (standard - height) << " cm" << endl;

    return 0;
}