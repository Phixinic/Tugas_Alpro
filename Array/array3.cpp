#include <iostream>

using namespace std;

int main() {
    int angka[7]; 
    int terbesar;

    cout << "Masukkan 7 angka integer:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    terbesar = angka[0];

    for (int i = 1; i < 7; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    cout << "\nBilangan terbesar adalah: " << terbesar << endl;

    return 0;
}
