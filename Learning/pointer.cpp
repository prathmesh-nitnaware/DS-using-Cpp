#include <iostream>
using namespace std;
int main() {
    int a =3;
    int* b = &a; // Pointer b points to the address of a
    int** c = &b; // Pointer c points to the address of pointer b
    cout << "Value of a: " << a << endl; // Output the value of a
    cout << "Address of a: " << &a << endl; // Output the address
    cout << "Value of b (address of a): " << b << endl; // Output the address stored in b
    return 0;
}