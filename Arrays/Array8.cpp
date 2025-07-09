#include <iostream>
using namespace std;
int main() {
    //Find the second largest element in the array
    int arr[] = {7, 2, 3, 9, 0, 3, 5, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }

    int first = arr[0], second = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    if (second == -1) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element in the array is: " << second << endl;
    }
    return 0;
}