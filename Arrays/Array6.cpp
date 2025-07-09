#include <iostream>
using namespace std;
int main() {
    //Reverse the entire array
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[size]; 

    for(int i = size - 1; i >= 0; i--) {
        arr2[size - 1 - i] = arr[i];
    }

    cout << "Reversed array: ";
    for(int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}