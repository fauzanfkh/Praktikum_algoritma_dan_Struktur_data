#include <iostream>
#include <string> // Penting untuk tipe data string
using namespace std;

// 1. Mendefinisikan struktur untuk data kendaraan
struct data_kendaraan {
    string plat;
    string jenis;
    string nama;
    string alamat;
    string kota;
};

int main() {
    // 2. Membuat variabel/objek 'mobil' dari struct data_kendaraan
    data_kendaraan mobil;

    // 3. Mengisi data ke dalam struct sesuai permintaan soal
    mobil.plat = "DA1234MK";
    mobil.jenis = "RUSH";
    mobil.nama = "Andika Hartanto";
    mobil.alamat = "Jl. Kayu Tangi 1";
    mobil.kota = "Banjarmasin";

    // 4. Menampilkan output dengan format poin a sampai e
    cout << "a. Plat Nomor Kendaraan : " << mobil.plat << endl;
    cout << "b. Jenis Kendaraan      : " << mobil.jenis << endl;
    cout << "c. Nama Pemilik         : " << mobil.nama << endl;
    cout << "d. Alamat               : " << mobil.alamat << endl;
    cout << "e. Kota                 : " << mobil.kota << endl;

    return 0;
}