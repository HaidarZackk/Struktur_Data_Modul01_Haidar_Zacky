#include <iostream>
#include <string>
using namespace std;

int main() {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan",
                       "sepuluh", "sebelas"};
    int n;

    cout << "Masukkan angka (0 - 100) : ";
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Angka harus berada pada rentang 0 sampai 100" << endl;
    } else {
        cout << n << " : ";
        if (n <= 11) {
            cout << satuan[n];
        } else if (n < 20) {
            cout << satuan[n - 10] << " belas";
        } else if (n < 100) {
            cout << satuan[n / 10] << " puluh";
            if (n % 10 != 0) {
                cout << " " << satuan[n % 10];
            }
        } else {
            cout << "seratus";
        }
        cout << endl;
    }

    return 0;
}