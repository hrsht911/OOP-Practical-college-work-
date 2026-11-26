#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    double salary;

public:
    Employee() : empId(0), name(""), salary(0.0) {}

    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() const {
        cout << "Employee ID: " << empId << endl;
        cout << "Name:        " << name << endl;
        cout << "Salary:      " << salary << endl;
    }
};

int main() {
    // 1. Single Employee object allocated dynamically using new
    Employee* empPtr = new Employee();

    cout << "--- Enter Employee Record ---" << endl;
    empPtr->inputDetails();

    cout << "\n--- Employee Record Details ---" << endl;
    empPtr->displayDetails();

    // 2. Release allocated memory using delete and set pointer to nullptr
    delete empPtr;
    empPtr = nullptr; // Prevents dangling pointer

    // Safe check after deletion
    if (empPtr == nullptr) {
        cout << "\nMemory released safely; pointer is now nullptr (no dangling pointer)." << endl;
    }

    // 3. Optional: Dynamic array of Employee objects using new[] and delete[]
    int count;
    cout << "\nHow many additional employee records do you want to enter? ";
    cin >> count;

    if (count > 0) {
        Employee* empArray = new Employee[count];

        for (int i = 0; i < count; ++i) {
            cout << "\n--- Employee " << (i + 1) << " ---" << endl;
            empArray[i].inputDetails();
        }

        cout << "\n--- All Additional Employee Records ---" << endl;
        for (int i = 0; i < count; ++i) {
            cout << "\nEmployee " << (i + 1) << ":" << endl;
            empArray[i].displayDetails();
        }

        // Release array memory using delete[] and nullify pointer
        delete[] empArray;
        empArray = nullptr;
    }

    return 0;
}
