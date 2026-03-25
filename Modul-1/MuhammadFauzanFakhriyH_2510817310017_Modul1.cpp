#include <iostream>
#include <string>

using namespace std;

int main() {
    // Implementasi Struktur Data sederhana berupa Array 
    // Sesuai definisi modul: "Skema organisasi yang diterapkan pada data"
    string hobi[3] = {"Sepak Bola", "Futsal", "Video Editing"};

    cout << "--- Daftar Hobi (Struktur Data Array) ---" << endl;

    // Mengakses data sehingga dapat diinterpretasikan (Tampil ke layar)
    for(int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << hobi[i] << endl;
    }

    return 0;
}
