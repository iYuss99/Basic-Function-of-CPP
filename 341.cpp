#include <iostream>
#include <string>
using namespace std;

//declare func dengan pass by value
void ubahString(string str);

//define func
void ubahString(string str) {
    str = "String diubah dalam function";
    cout << "Nilai dalam function : " << str << endl;
}

//main func
int main () {
    string teks = "string aseli";
    cout << "Sebelum func dipanggil : " << teks << endl;
    ubahString(teks); //pass by value
    cout << "Setelah func dipanggil : " << teks << endl;

    return 0;
}