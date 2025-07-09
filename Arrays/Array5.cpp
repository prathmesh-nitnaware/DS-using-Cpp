#include <iostream>
using namespace std;
int main() {
    //Count occurrence of a given element 

    int arr[] = {7, 2, 3, 9, 0, 3, 5, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 3; // Element to count occurrences of
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    cout << "The element " << element << " occurs " << count << " times in the array." << endl;
    return 0;
}