#include <iostream>
using namespace std;

int main() {
    int pilihan;
    do {
        cout << "FIBONACCI GENERATOR ===\n";
        cout << "1) n suku\n";
        cout << "2) sampai <= m\n";
        cout << "3) exit\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;
            if (n <= 0) {
                cout << "Input tidak valid!\n";
                continue;
            }
            int a = 0, b = 1;
            cout << "Hasil (" << n << " suku):\n";
            for (int i = 1; i <= n; i++) {
                cout << a << " ";
                int c = a + b;
                a = b;
                b = c;
            }
            cout << "\n";
        } else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;
            if (m < 0) {
                cout << "Input tidak valid!\n";
                continue;
            }
            int a = 0, b = 1;
            cout << "Hasil (<= " << m << "):\n";
            while (a <= m) {
                cout << a << " ";
                int c = a + b;
                a = b;
                b = c;
            }
            cout << "\n";
        }
    } while (pilihan != 3);

    return 0;
}
