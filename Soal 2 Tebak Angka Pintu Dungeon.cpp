#include <iostream>
using namespace std;

int main() {
    int kode = 7, tebakan;
    cout << "Pintu Dungeon\n";
    for (int i = 1; i <= 3; i++) {
        cout << "Percobaan " << i << "/3 - Tebak: ";
        cin >> tebakan;
        if (tebakan == kode) {
            cout << "Benar!\n";
            return 0;
        } else {
            cout << "Salah!\n";
        }
    }
    cout << "Kalah! Angka = " << kode << "\n";
    return 0;
}
