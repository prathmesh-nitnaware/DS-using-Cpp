#include <iostream>
using namespace std;
int main() {
    //Sum of an Array
    int arr[6] = {2, 5, 8, 9, 6, 4};
    int sum = 0;
    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++){
        sum = sum + arr[i];
    }
    cout<<sum;
    
    return 0;
}