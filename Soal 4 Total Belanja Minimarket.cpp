#include <iostream>
using namespace std;

int main() {
    int harga, jumlah = 0, total = 0;
    cout << "Belanja Minimarket\n";
    cout << "Masukkan harga barang (@ untuk selesai):\n";

    while (true) {
        cout << "Harga: ";
        cin >> harga;
        if (harga == 0) break;
        total += harga;
        jumlah++;
    }

    cout << "Jumlah barang: " << jumlah << "\n";
    cout << "Total sebelum diskon: " << total << "\n";

    int diskon = 0;
    if (total >= 100000) diskon = total * 0.1;

    cout << "Diskon: " << diskon << "\n";
    cout << "Total bayar: " << total - diskon << "\n";
    return 0;
}
