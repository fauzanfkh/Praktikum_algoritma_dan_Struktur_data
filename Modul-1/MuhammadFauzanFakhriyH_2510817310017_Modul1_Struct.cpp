#include <iostream>

using namespace std;

// 1.3.1 Mendeklarasikan Struktur
// Membuat tipe data baru bernama data_tanggal
struct data_tanggal {
    int tanggal;
    int bulan;
    int tahun;
};

int main() {
    // Membuat variabel tgl_lahir dengan tipe data_tanggal
    struct data_tanggal tgl_lahir;

    // 1.3.2 Mengakses Elemen Struktur
    // Mengisi data menggunakan operator titik (.)
    tgl_lahir.tanggal = 24;
    tgl_lahir.bulan = 7;
    tgl_lahir.tahun = 2006;

    // Menampilkan data yang telah diisi
    cout << "--- Data Tanggal Lahir ---" << endl;
    cout << "Tanggal : " << tgl_lahir.tanggal << endl;
    cout << "Bulan   : " << tgl_lahir.bulan << endl;
    cout << "Tahun   : " << tgl_lahir.tahun << endl;

    return 0;
}
