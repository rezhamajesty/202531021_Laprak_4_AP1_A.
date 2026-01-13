#include <iostream>
using namespace std;

int main() {
    int n, total = 0, uang;
    cout << "Uang Saku\n";
    cout << "Masukkan jumlah hari: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> uang;
        total += uang;
    }

    cout << "Total: " << total << "\n";
    return 0;
}
