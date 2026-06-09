#include <iostream>
using namespace std;

// Function mengembalikan pointer ke variabel statis
int* getStaticValue() {
    static int value = 42;
    return &value;
}

int main() {
    int *ptr = getStaticValue();
    cout << "Nilai yang dikembalikan: " << *ptr << endl;
    return 0;
}