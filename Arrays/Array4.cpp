#include <iostream>
using namespace std;
int main() {
    //Find Maximum and Minimum element in the array
    int arr[] = {7, 2, 3, 9, 0, 3, 5, 8, 1, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout<< "The minimum element in the array is: " << min << endl;

    int max = arr[0];
    for(int i =0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<< "The maximum element in the array is: " << max << endl;
    return 0;
}