#include <iostream>
using namespace std;

//func mengembalikan ptr ke str C-Style
const char* getCString() {
    static char teks[] = "ini str c-style";
    return teks;
}

int main () {
    const char* hasil = getCString();
    cout << "Hasil : "<< hasil << endl;
    return 0;
}