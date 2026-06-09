#include <iostream>
using namespace std;

void ubahArray(int *arr, int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        arr[i] += 5;
    }
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    int ukuran = sizeof(data) / sizeof(data[0]);

    ubahArray(data, ukuran);

    cout << "Array setelah function: ";
    for (int i = 0; i < ukuran; i++) {
        cout << data[i] << " ";
    }

    return 0;
}