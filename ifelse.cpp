#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age:" ;
    cin >> age;
    if (age<18){
        cout << "You are not adult "<< endl;
    }
    else{
        cout<<"You are an adult"<< endl;
    }

    return 0;
}