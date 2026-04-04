#include <iostream>
#define max 5 // Tentukan batas maksimal tumpukan

using namespace std;

// Struktur data stack manual
struct {
    int atas;
    int data[max];
} Tumpuk;

// Fungsi untuk mengecek apakah stack kosong
int kosong() {
    if (Tumpuk.atas == -1)
        return 1;
    else
        return 0;
}

// Fungsi untuk mengecek apakah stack penuh
int penuh() {
    if (Tumpuk.atas == max - 1)
        return 1;
    else
        return 0;
}

// Fungsi untuk memasukkan data ke stack (PUSH)
void input(int data) {
    if (kosong() == 1) {
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk Ke Stack" << endl;
    } 
    else if (penuh() == 0) {
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk Ke Stack" << endl;
    } 
    else {
        cout << "Tumpukan Penuh" << endl;
    }
}

// Fungsi untuk menghapus data teratas (POP)
void hapus() {
    if (kosong() == 0) {
        cout << "Data Teratas Sudah Terambil" << endl;
        Tumpuk.atas--;
    } 
    else {
        cout << "Data Kosong" << endl;
    }
}

// Fungsi untuk menampilkan seluruh isi stack
void tampil() {
    if (kosong() == 0) {
        for (int i = Tumpuk.atas; i >= 0; i--) {
            cout << "\nTumpukan Ke " << i << " = " << Tumpuk.data[i];
        }
        cout << endl;
    } 
    else {
        cout << "Tumpukan Kosong" << endl;
    }
}

// Fungsi untuk membersihkan seluruh isi stack
void bersih() {
    Tumpuk.atas = -1;
    cout << "Tumpukan Kosong!" << endl;
}

int main() {
    Tumpuk.atas = -1; // Inisialisasi awal
    
    // Contoh penggunaan
    input(10);
    input(20);
    tampil();
    hapus();
    tampil();
    
    return 0;
}