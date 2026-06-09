#include <iostream>
#include <string>
using namespace std;

//declare func with pass by reference
void ubahString(string &str);

//define func
void ubahString(string &str) {
    str = "String diubah dalam func";
    cout << "Nilai di dalam func : " << str << endl;
}

//main func
int main() {
    string teks = "String asli";
    cout << "Sebelum func dipanggil : " << teks << endl;
    ubahString(teks); //pass bt ref
    cout << "Setelah func dipanggil : " << teks << endl; //berubah

    return 0;
}