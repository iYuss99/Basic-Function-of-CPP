#include <iostream>
#include <string>
using namespace std;

// Function mengembalikan pointer ke string static
string* getStaticString() {
    static string teks = "Ini string static";
    return &teks;
}

int main() {
    string* hasil = getStaticString();
    cout << "Hasil: " << *hasil << endl;
    
    return 0;
}