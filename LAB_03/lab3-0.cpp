#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float a = 15;
    double b = 25.9876;
    /* ����fixed�T�w���p���I��ܪk�A�M��showpoint������0��p�ƫ�Ĥ���A
    setprecision��p���I�T�w��ĤG��A�ҥH�p�ƲĤT��H��q�q�R�h�A
    �ҥHsetprecision�O���ӳ]�w�B�I�ơA���O���(�]�����)*/
    cout << fixed << showpoint << setprecision(2) << a << endl;
    cout << fixed << showpoint << setprecision(2) << b << endl;

    return 0;
}