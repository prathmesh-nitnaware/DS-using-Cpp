#include <iostream>
using namespace std;
int main() {
    int arr[6] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers

    cout<<"Original array: ";
    for(int i = 0; i < 5; i++) {
        cout<< arr[i] << " "; 
    }
    cout << endl;

    //Inserting an Element
    int newElement = 60;

    arr[5] = newElement;

    cout<< "Array after adding new element: ";
    for(int i = 0; i < 6; i++) {
        cout<< arr[i] << " "; 
    }

    cout<< endl;

    //Deleting an Element
    for(int i = 2; i < 5; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deleting element at index 2: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Searching in array
    int searchElement = 5;
    bool found = false;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == searchElement) {
            found = true;
            cout << "Element " << searchElement << " found at index " << i << endl;
            break;
        }
    }
    if(!found) {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }

    return 0;
}