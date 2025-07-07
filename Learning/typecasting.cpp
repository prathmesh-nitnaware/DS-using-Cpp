#include<iostream>
using namespace std;

int main(){
    int a = 45;
    float b = 3.14;
    cout << "Value of a: " << a << endl;
    cout <<"Value of a after typecasting: " <<(float)a << endl;
    cout << "Value of b: " << b << endl;
    cout <<"Value of b after typecasting: " <<(int)b << endl;

    int c = int(b);
    cout << "Value of c after typecasting: " << c << endl;

    return 0;
}