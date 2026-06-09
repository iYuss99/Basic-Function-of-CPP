#include <iostream>
using namespace std;

//declare func dengan ptr
void ubahNilai (int *x);

//define func
void ubahNilai (int *x) {
    *x = 100; //ubah nilai asli di memori
    cout << "Nilai di dalam func : " << *x << endl;
}

//main func
int main () {
    int a = 50;
    cout << "Sebelum func dipanggil : " << a << endl;
    ubahNilai (&a); //send alamat ke var a
    cout << "Setelah func dipanggil : " << a << endl;

    return 0;
}