#include <iostream>
using namespace std;

// Function yang digunakan sebagai callback
int tambah(int a, int b) {
    return a + b;
}

// Function yang menerima callback dan menggunakannya
int hitung(int x, int y, int (*callback)(int, int)) {
    cout << "Memproses perhitungan..." << endl;
    return callback(x, y); // Memanggil function yang dikirim
}

int main() {
    // Mengirim function sebagai argumen
    int hasil = hitung(5, 3, tambah);

    cout << "Hasil: " << hasil << endl;

    return 0;
}