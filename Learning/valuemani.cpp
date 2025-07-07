#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a = 45;
    float b = 3.14;
    cout << "Value of a: " << setw(4) << a << endl;
    cout << "Value of b: " << setw(5.23) << b << endl;
    return 0;

    // The setw manipulator is used to set the width of the next input/output field.
    // It is defined in the <iomanip> header file.
}