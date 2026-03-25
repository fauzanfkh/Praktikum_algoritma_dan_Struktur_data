#include <iostream>
#include <stdlib.h> // Library wajib untuk fungsi malloc() dan free()

using namespace std;

int main() {
    // 1. Deklarasi tipe pointer menggunakan typedef (Sesuai modul)
    typedef int *IntegerPointer;
    IntegerPointer A, B;

    // 2. Prosedur dinamis untuk alokasi penyimpan (malloc)
    // Memesan memori sebesar ukuran integer untuk pointer A dan B
    A = (IntegerPointer) malloc(sizeof(int));
    B = (int *) malloc(sizeof(int));

    // 3. Mengisi nilai ke blok penyimpanan yang ditunjuk (Sesuai modul: *A = 5)
    if (A != NULL) {
        *A = 5; 
    }
    
    // Memberikan nilai contoh untuk B
    if (B != NULL) {
        *B = 10;
    }

    // 4. Menampilkan hasil
    cout << "--- Implementasi Pointer ---" << endl;
    cout << "Nilai yang ditunjuk oleh pointer A : " << *A << endl;
    cout << "Nilai yang ditunjuk oleh pointer B : " << *B << endl;

    // 5. Membebaskan memori kembali (Good Practice)
    free(A);
    free(B);

    return 0;
}