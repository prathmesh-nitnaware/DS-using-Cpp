#include <iostream>
using namespace std;
int main() {
    int mathMarks[] = {85, 90, 78, 92, 88};
    for (int i = 0; i < 5; i++) {
        cout << "Math Marks of Student " << i + 1 << ": " << mathMarks[i] << endl;
    }

    mathMarks[2] = 95; // Update the marks of the third student
    cout << "Updated Math Marks of Student 3: " << mathMarks[2] << endl;
    int* ptr = mathMarks; // Pointer to the first element of the array
    cout << "Using pointer to access Math Marks of Student 4: " << *(ptr + 3) << endl;
    return 0;
}