#include <iostream>
#include <string>
using namespace std;

string satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};

string konversiKeTeks(int n) {
    if (n == 0) return "Nol";
    if (n <= 11) return satuan[n];
    if (n < 20) return satuan[n - 10] + " Belas";
    if (n < 100) {
        string hasil = satuan[n / 10] + " Puluh";
        if (n % 10 != 0) {
            hasil += " " + satuan[n % 10];
        }
        return hasil;
    }
    if (n == 100) return "Seratus";
    
    return "Di luar jangkauan (0 - 100)";
}

int main() {
    int angka;
    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << " : " << konversiKeTeks(angka) << endl;
    } else {
        cout << "Input harus antara 0 sampai 100." << endl;
    }

    return 0;
}