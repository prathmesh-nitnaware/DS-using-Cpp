#include <iostream>
using namespace std;
int main() {
    //Number of elements present in the array
    int arr[] = {2, 9, 1, 3, 93, 30};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of elements in the array: " << length << endl;
    return 0;
}