#include <iostream>
#include <string> // Dibutuhkan agar bisa menggunakan tipe data string
using namespace std;

int main() {
    // Deklarasi variabel
    char huruf;
    string kata;
    int angka;

    // Bagian Input (Poin a, b, c)
    cout << "a. Masukkan sebuah huruf = "; cin >> huruf;
    cout << "b. Masukan sebuah kata  = "; cin >> kata;
    cout << "c. Masukkan Angka        = "; cin >> angka;

    // Bagian Output (Poin d, e, f)
    cout << "\nd. Huruf yang Anda masukkan adalah : " << huruf << endl;
    cout << "e. Kata yang Anda masukkan adalah  : " << kata << endl;
    cout << "f. Angka yang Anda masukkan adalah : " << angka << endl;

    return 0;
}