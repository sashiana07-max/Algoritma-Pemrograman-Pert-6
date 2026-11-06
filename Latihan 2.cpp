#include <iostream>
using namespace std;

int main() {
    int nilai;
    int kehadiran;

    cout << "Masukkan nilai ujian: ";
    cin >> nilai;
    cout << "Masukkan persentase kehadiran (%): ";
    cin >> kehadiran;

    // Nested IF (If di dalam If)
    if (nilai >= 75) {
        // Jika nilai mencukupi, cek kehadiran
        if (kehadiran >= 80) {
            cout << "Status: Lulus dengan predikat memuaskan!" << endl;
        } else {
            cout << "Status: Tidak lulus karena kehadiran kurang dari 80%." << endl;
        }
    } else {
        // Jika nilai kurang dari 75
        if (kehadiran >= 80) {
            cout << "Status: Tidak lulus, nilai ujian Anda kurang." << endl;
        } else {
            cout << "Status: Tidak lulus (Nilai dan kehadiran tidak memenuhi syarat)." << endl;
        }
    }

    return 0;
}
