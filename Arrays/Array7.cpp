#include <iostream>
using namespace std;
int main() {
    //Print Even and Odd Elements in the array
    int arr[] = {7, 2, 3, 9, 0 , 3, 5, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Even elements in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << "Odd elements in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}