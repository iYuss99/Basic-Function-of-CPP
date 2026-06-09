#include <iostream>
using namespace std;

// Function yang akan digunakan sebagai callback
void cetakHello() {
    cout << "Hello, ini callback function!" << endl;
}

// Function yang menerima function sebagai parameter
void jalankanCallback(void (*callback)()) {
    cout << "Sebelum memanggil callback" << endl;
    callback(); // Memanggil function yang dikirim
    cout << "Setelah memanggil callback" << endl;
}

int main() {
    jalankanCallback(cetakHello); // Mengirim function sebagai argumen
    return 0;
}