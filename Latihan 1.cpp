#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "Masukkan angka hari (1-7): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "MONDAY" << endl;
            break;
        case 2:
            cout << "TEUSDAY" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4:
            cout << "THURSDAY" << endl;
            break;
        case 5:
            cout << "FRIDAY" << endl;
            break;
        case 6:
            cout << "SATURDAY" << endl;
            break;
        case 7:
            cout << "SUNDAY" << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Masukkan angka antara 1 sampai 7." << endl;
    }

    return 0;
}
