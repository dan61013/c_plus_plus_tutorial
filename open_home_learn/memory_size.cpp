#include <iostream>
using namespace std;

int main() {
    // Data type
    cout << "\nData Type\tSize(Bytes)";
    cout << "\nint\t" << sizeof(int);
    cout << "\nlong\t" << sizeof(long);
    cout << "\nfloat\t" << sizeof(float);
    cout << "\ndouble\t" << sizeof(double);
    cout << "\nchar\t" << sizeof(char);
    cout << "\n";

    // Boolean
    cout << "sizeof(bool)\t" << sizeof(bool) << "\n";
    cout << "sizeof(true)\t" << sizeof(true) << "\n";
    cout << "sizeof(false)\t" << sizeof(false) << "\n";

    cout << "true\t" << true << "\n";
    cout << "false\t" << false << "\n";

    return 0;
}
