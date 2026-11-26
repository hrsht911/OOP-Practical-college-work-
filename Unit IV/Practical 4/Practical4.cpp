#include <iostream>
using namespace std;

// Class template to store two student marks and compute their average
template <typename T>
class StudentMarks {
private:
    T mark1;
    T mark2;

public:
    StudentMarks(T m1, T m2) : mark1(m1), mark2(m2) {}

    void displayMarks() const {
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
    }

    double getAverage() const {
        return (static_cast<double>(mark1) + static_cast<double>(mark2)) / 2.0;
    }
};

int main() {
    // 1. Integer marks
    cout << "--- Integer Marks ---" << endl;
    StudentMarks<int> intMarks(85, 90);
    intMarks.displayMarks();
    cout << "Average Marks: " << intMarks.getAverage() << endl << endl;

    // 2. Floating-point marks
    cout << "--- Floating-Point Marks ---" << endl;
    StudentMarks<double> doubleMarks(87.5, 92.25);
    doubleMarks.displayMarks();
    cout << "Average Marks: " << doubleMarks.getAverage() << endl;

    return 0;
}