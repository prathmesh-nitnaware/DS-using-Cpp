#include<iostream>
using namespace std;

int global = 6;

int main(){
    int global = 7;
    int a =5;
    cout << "Int Number = " << a << endl;
    float b = 5.12;
    cout << "Float Number = " << b << endl; 
    double c = 3.14;
    cout << "Double = " << c << endl;
    bool d = 5==5;
    cout << "Boolean = " << d << endl;
    char e = 'f';
    cout << "Character = " << e << endl;

    cout<< "Global Variable = " << global << endl;
    return 0;
}