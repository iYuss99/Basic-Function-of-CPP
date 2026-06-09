#include <iostream>
#include <cmath>
using namespace std;

//declare func
int hitungLuasPersegi(int sisi);

//define func
int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

//main func
int main () {
    cout << "Program dimulai dari main function ()" << endl;

    //user defined func
    int sisi = 5;
    int luas = hitungLuasPersegi (sisi);
    cout <<"Luas persegi dengan sisi : " << sisi << "\nadalah: " << luas << endl;

    //using lib func
    double angka = 16.0;
    double akar = sqrt (angka);
    cout <<"Akar kuadrat dari : "<< angka << "\nadalah : " << akar << endl;

    return 0;
}