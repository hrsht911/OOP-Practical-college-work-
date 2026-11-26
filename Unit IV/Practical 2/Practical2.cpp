#include <iostream>
using namespace std;

// Function template to swap two values of any data type T
template <typename T>
void swapValues(T& first, T& second) {
    T temp = first;
    first = second;
    second = temp;
}

int main() {
    // Integer swap
    int id1 = 12, id2 = 34;
    swapValues(id1, id2);
    cout << "Swapped integers: " << id1 << ", " << id2 << endl;

    // Character swap
    char sec1 = 'A', sec2 = 'C';
    swapValues(sec1, sec2);
    cout << "Swapped characters: " << sec1 << ", " << sec2 << endl;

    // Floating-point swap
    double cgpa1 = 8.4, cgpa2 = 9.1;
    swapValues(cgpa1, cgpa2);
    cout << "Swapped floating-point numbers: " << cgpa1 << ", " << cgpa2 << endl;

    return 0;
}