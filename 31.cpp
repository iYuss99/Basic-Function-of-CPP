#include <iostream>
#include <cstring>
using namespace std;

//Deklarasi Func
int tambah (int a, int b); //Dekclare func tambah

//Define func 
int tambah (int a, int b) {
    return a + b;
}

//Main func
int main () {
    int hasil = tambah (4, 6 );
    cout <<"Hasil penjumlahan : "<< hasil << endl;
    return 0;
}