#include <iostream>
#include <string>
using namespace std;

//func mengembalikan ptr ke str yg dialokasikan secara dinamin
string* getDynamicString () {
    string* teks = new string ("Ini str dari heap");
    return teks;
}

int main() {
    string* hasil = getDynamicString();
    cout <<"Hasil : " << *hasil << endl;

    delete hasil;
    return 0;
}