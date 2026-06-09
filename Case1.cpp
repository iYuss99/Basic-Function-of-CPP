#include <iostream>
using namespace std;

void ubahNilai(int x) {
    x = 20;
}

int main() {
    int angka = 10;
    cout << "Sebelum function: " << angka << endl;

    ubahNilai(angka);

    cout << "Setelah function: " << angka << endl;
    return 0;
}