#include<iostream>
using namespace std;
int main(){
    int i = 0;
    for (i = 0; i < 5; i++) {
        cout << " " << i << endl;
    }

    int j = 0;
    while (j<2) {
        cout << " " << j << endl;
        j++;
    }
    
    int k = 0;
    do{
        cout<<" " << k <<endl;
        k++;
    }while(k<3);
    
    return 0;
}