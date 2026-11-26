#include <iostream>
using namespace std;

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Invalid number of students. Please enter a positive integer." << endl;
        return 1;
    }

    // Dynamically allocate array of marks on the heap using new
    double* marks = new double[numStudents];

    // Accept marks from the user
    cout << "\nEnter marks for " << numStudents << " students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
    }

    // Display all marks and find the highest mark
    double highestMark = marks[0];
    cout << "\n--- Recorded Marks ---" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
        if (marks[i] > highestMark) {
            highestMark = marks[i];
        }
    }

    cout << "\nHighest Mark: " << highestMark << endl;

    // Release dynamically allocated array memory using delete[]
    delete[] marks;
    marks = nullptr;

    return 0;
}