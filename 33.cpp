#include <iostream>
using namespace std;

// Deklarasi function
void passByValue(int x);
void passByReference(int &x);
void passByPointer(int *x);

// Function utama
int main() {
    int a = 50;

    // Pass by Value
    cout << "Sebelum passByValue: " << a << endl;
    passByValue(a);
    cout << "Setelah passByValue: " << a << endl << endl;

    // Pass by Reference
    cout << "Sebelum passByReference: " << a << endl;
    passByReference(a);
    cout << "Setelah passByReference: " << a << endl << endl;

    // Pass by Pointer
    cout << "Sebelum passByPointer: " << a << endl;
    passByPointer(&a);
    cout << "Setelah passByPointer: " << a << endl;

    return 0;
}

// Definisi function
void passByValue(int x) {
    x = 100;
    cout << "Nilai di dalam passByValue: " << x << endl;
}

void passByReference(int &x) {
    x = 200;
    cout << "Nilai di dalam passByReference: " << x << endl;
}

void passByPointer(int *x) {
    *x = 300;
    cout << "Nilai di dalam passByPointer: " << *x << endl;
}