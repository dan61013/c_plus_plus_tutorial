// https://openhome.cc/Gossip/CppGossip/ifStatement.html
// if�_���ƧP�_

#include <iostream>
using namespace std;

int main() {
    int input = 0;

    cout << "�п�J���: " << endl;
    cin >> input;

    int remain = input % 2;

    if (remain == 1)
        cout << input << "���_��" << endl;
    else
        cout << input << "������" << endl;

    return 0;
}