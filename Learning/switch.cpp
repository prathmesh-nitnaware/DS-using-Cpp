#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch(age){
        case 18: 
            cout << "You are an 18" << endl;
            break;
        case 22:
            cout << "You are a 22" << endl;
            break;
        case 2:
            cout << "You are a 2" << endl;
            break;
        default:
            cout << "No special cases" << endl;
            break;
    }

    return 0;
}