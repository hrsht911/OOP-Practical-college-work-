#include <iostream>
using namespace std;

int main() {
    // 1. Variable declaration and initialization
    int sensorReading = 42;
    double temperature = 23.5;

    // 2. Pointer declaration and initialization using address-of operator (&)
    int* ptrReading = &sensorReading;
    double* ptrTemp = &temperature;

    // Display variable values and their memory addresses
    cout << "--- Initial Values and Memory Addresses ---" << endl;
    cout << "sensorReading value: " << sensorReading
         << ", address (&sensorReading): " << &sensorReading << endl;
    cout << "ptrReading stores address: " << ptrReading
         << ", dereferenced value (*ptrReading): " << *ptrReading << endl << endl;

    cout << "temperature value: " << temperature
         << ", address (&temperature): " << &temperature << endl;
    cout << "ptrTemp stores address: " << ptrTemp
         << ", dereferenced value (*ptrTemp): " << *ptrTemp << endl << endl;

    // 3. Modifying the variable's value through its pointer (dereferencing)
    *ptrReading = 98;
    *ptrTemp = 26.8;

    cout << "--- After Modification via Pointers ---" << endl;
    cout << "sensorReading value: " << sensorReading
         << ", *ptrReading: " << *ptrReading << endl;
    cout << "temperature value: " << temperature
         << ", *ptrTemp: " << *ptrTemp << endl;

    return 0;
}