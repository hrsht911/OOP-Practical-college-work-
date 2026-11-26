#include <iostream>
using namespace std;

int main() {
    const int empCount = 6;
    int empIds[empCount] = {1001, 1005, 1012, 1020, 1034, 1050};

    // Pointer declaration and initialization to array elements
    int* startPtr = empIds;         // Points to first element (1001)
    int* secondPtr = empIds + 1;    // Points to second element (1005)
    int* fourthPtr = empIds + 3;    // Points to fourth element (1020)
    int* lastPtr = empIds + empCount - 1; // Points to last element (1050)

    cout << "--- Accessing Elements via Pointers ---" << endl;
    cout << "First Employee ID (*startPtr): " << *startPtr
         << " at address " << startPtr << endl;
    cout << "Second Employee ID (*secondPtr): " << *secondPtr
         << " at address " << secondPtr << endl;
    cout << "Fourth Employee ID (*fourthPtr): " << *fourthPtr
         << " at address " << fourthPtr << endl;
    cout << "Last Employee ID (*lastPtr): " << *lastPtr
         << " at address " << lastPtr << endl << endl;

    cout << "--- Pointer Comparison ---" << endl;
    if (startPtr < fourthPtr) {
        cout << "startPtr (" << startPtr << ") comes BEFORE fourthPtr ("
             << fourthPtr << ") in memory." << endl;
    }

    if (lastPtr > secondPtr) {
        cout << "lastPtr (" << lastPtr << ") comes AFTER secondPtr ("
             << secondPtr << ") in memory." << endl;
    }

    int* checkPtr = empIds + 3;
    cout << "fourthPtr == checkPtr: " << (fourthPtr == checkPtr ? "true" : "false") << endl;
    cout << "secondPtr != fourthPtr: " << (secondPtr != fourthPtr ? "true" : "false") << endl << endl;

    cout << "--- Pointer Subtraction ---" << endl;
    // Subtracting two pointers in the same array yields the number of elements between them
    ptrdiff_t distanceFourthToSecond = fourthPtr - secondPtr;
    ptrdiff_t distanceLastToStart = lastPtr - startPtr;

    cout << "fourthPtr - secondPtr = " << distanceFourthToSecond
         << " elements apart" << endl;
    cout << "lastPtr - startPtr = " << distanceLastToStart
         << " elements apart" << endl;

    return 0;
}