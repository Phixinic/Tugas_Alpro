#include <iostream>

using namespace std;

int main() {
    int angka[10]; 
    int jumlah = 0; 

    cout << "Masukkan 10 angka integer:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
        jumlah += angka[i]; 
    }

    cout << "\nJumlah semua angka adalah: " << jumlah << endl;

    return 0;
}
