#include <iostream>
using namespace std;

// Function yang akan disimpan dalam array
void fungsi1() { cout << "Function 1" << endl; }
void fungsi2() { cout << "Function 2" << endl; }
void fungsi3() { cout << "Function 3" << endl; }

int main() {
    // Array of function pointers
    void (*arrayFungsi[])() = { fungsi1, fungsi2, fungsi3 };

    int pilihan;
    cout << "Masukkan pilihan (0-2): ";
    cin >> pilihan;

    if (pilihan >= 0 && pilihan <= 2)
        arrayFungsi[pilihan](); // Memanggil function berdasarkan indeks
    else
        cout << "Pilihan tidak valid" << endl;

    return 0;
}