/*
�D�� - �Ѧh�ֿ�?
��J���]�̭쥻���h�ֿ��B�Y�@�ӫ~������A�п�X�R���Ӱӫ~������]�Ѧh�ֿ��C���]���]�����j�󵥩�Ӱӫ~����C

Input1: 100 25, Output1: 75
Input1: 311246 25452, Output1: 285794
*/
#include <iostream>
using namespace std;

int main()
{
    int wallet, product;
    cout << "�п�J���]�̪����B�ΰӫ~����: " << endl;
    cin >> wallet >> product;
    cout << wallet - product << endl;

    return 0;
}