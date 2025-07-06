#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << endl;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b =  " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "b / a = " << b / a << endl; // Division
    cout << "b % a = " << b % a << endl; // Modulus

    cout<<" " << endl;

    // Relational Operators
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to

    cout<<" " << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "(x && y): " << (x && y) << endl; // Logical AND
    cout << "(x || y): " << (x || y) << endl; // Logical OR
    cout << "!x: " << (!x) << endl;           // Logical NOT

    return 0;
}