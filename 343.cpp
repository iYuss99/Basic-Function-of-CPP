#include <iostream>
#include <string>
using namespace std;

//declare func with ptr
void ubahString(string *str);

//define func
void ubahString(string *str) {
    *str = *str = "String diubah dalam function";
    cout << "Nilai di dalam function: " << *str << endl;
}

//main func
int main () {
    string teks = "String asli";
    cout << "Sebelum function dipanggil: " << teks << endl;
    ubahString(&teks); // Pass by pointer
    cout << "Setelah function dipanggil: " << teks << endl; // Berubah
    
    return 0;
}