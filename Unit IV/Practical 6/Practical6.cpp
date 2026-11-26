#include <iostream>
using namespace std;

int main() {
    const int studentCount = 5;
    double marks[studentCount] = {82.5, 90.0, 76.5, 88.0, 93.0};

    // Pointer declaration and initialization to the first element of the array
    double* ptr = marks;
    double* endPtr = marks + studentCount;

    double sum = 0.0;
    int index = 0;

    cout << "Student Marks:" << endl;

    // Traverse using pointer arithmetic without array indexing ([])
    while (ptr < endPtr) {
        cout << "Student " << (index + 1) << " mark: " << *ptr
             << " (address: " << ptr << ")" << endl;

        sum += *ptr; // Dereference pointer to read element value
        ++ptr;       // Advance pointer by sizeof(double) bytes
        ++index;
    }

    double average = sum / studentCount;

    cout << "\nTotal Marks: " << sum << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}