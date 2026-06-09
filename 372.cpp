#include <iostream>
using namespace std;

// Function yang digunakan sebagai callback
void cetakPesan(string pesan) {
    cout << "Pesan: " << pesan << endl;
}

// Function yang menerima function dengan parameter
void jalankanCallback(void (*callback)(string), string teks) {
    cout << "Sebelum memanggil callback" << endl;
    callback(teks); // Memanggil function yang dikirim dengan parameter
    cout << "Setelah memanggil callback" << endl;
}

int main() {
    jalankanCallback(cetakPesan, "Halo, Callback!"); // Mengirim function dan parameter
    return 0;
}