#include <iostream>
using namespace std;

void displayNum(int n1, float n2) {
    cout << "The int number is: " << n1;
    cout << "The double  number is: " << n2;
}

int main(){
    int num1 = 5;
    double num2 = 3.14;
    displayNum(num1, num2);
    return 0;
}
