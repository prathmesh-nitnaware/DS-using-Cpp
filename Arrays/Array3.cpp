#include <iostream>
using namespace std;
int main() {
    //Average of array elements
    int arr[] = {2, 4, 5, 1, 10, 4, 0, 3};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    int sum = 0;
    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++){
        sum = sum + arr[i];
    }
    cout<< "Sum of Array: " <<sum;
    cout<<endl;

    double avg;
    avg = (double)sum/length;

    cout << "Average of Array is: " << avg << endl;
    return 0;
}