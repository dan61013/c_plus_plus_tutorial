#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "The original number is " << 716.54564 << endl;
    // �C�X3��� 717
    cout << "The number with set precision 3 is " << setprecision(3) << 716.54564 << endl;
    // �C�X6���(�]�t�p���I) 716.546
    cout << "The number with set precision 6 is " << setprecision(6) << 716.54564 << endl;
    // �]�w�e��:10, ���6��� (showpoint -> �|�a�k����A�w�]���6�Ӧ��ļ�)
    cout << "The number in showpoint decimal notation is " << setw(10) << showpoint << setprecision(6)\
    << 716.54564 << endl;
    // �]�w�e��:10, fixed -> �u��ܤp�ƫ�6��� 716.545640
    cout << "The number in fix-point decimal notation is " << setw(10) << fixed << setprecision(6)\
    << 716.54564 << endl;
    // �]�w�e��:10, scientific -> �H��ǰO�����
    cout << "The number in exponential notation is " << setw(10) << scientific << setprecision(3)\
    << 716.54564 << endl;

    return 0;
}