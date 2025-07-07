#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter one integer: ";
    cin >> num1;
    cout << "Enter another integer: ";
    cin >> num2;
    cout << "Sum: " << sum(num1, num2);
    return 0;
}   