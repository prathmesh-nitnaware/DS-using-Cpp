#include<iostream>
using namespace std;

int globalVar = 45; 

int main() {
    int globalVar = 10;

    cout << "Local variable value: " << globalVar << endl;
    cout << "Global variable value: " << ::globalVar << endl;

    return 0;
}
