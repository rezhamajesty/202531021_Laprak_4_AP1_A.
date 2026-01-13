#include <iostream>
using namespace std;

int main() {
    int n, hadir = 0, tidak = 0, input;
    cout << "Kehadiran Kelas\n";
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): ";
        cin >> input;
        if (input == 1) hadir++;
        else tidak++;
    }

    double persentase = (hadir * 100.0) / n;
    cout << "Hadir: " << hadir << "\n";
    cout << "Tidak hadir: " << tidak << "\n";
    cout << "Persentase hadir: " << persentase << "%\n";
    return 0;
}
