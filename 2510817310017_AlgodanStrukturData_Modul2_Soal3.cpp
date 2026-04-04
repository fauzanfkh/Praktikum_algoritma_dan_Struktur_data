#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define n 10

using namespace std;

void INSERT();
void DELETE();
void CETAKLAYAR();
void Inisialisasi();
void RESET();

int PIL, F, R;
char PILIHAN[1], HURUF;
char Q[n];

int main() {
    Inisialisasi();
    do {
        cout << "QUEUE" << endl;
        cout << "===============" << endl;
        cout << "1. INSERT" << endl;
        cout << "2. DELETE" << endl;
        cout << "3. CETAK QUEUE" << endl;
        cout << "4. QUIT" << endl;
        cout << "PILIHAN : "; cin >> PILIHAN;
        PIL = atoi(PILIHAN);

        switch (PIL) {
            case 1:
                INSERT();
                break;
            case 2:
                DELETE();
                break;
            case 3:
                CETAKLAYAR();
                break;
            default:
                cout << "TERIMA KASIH" << endl;
                break;
        }
        cout << "press any key to continue" << endl;
        getch();
        system("cls");
    } while (PIL < 4);

    return 0;
}

void Inisialisasi() {
    F = -1;
    R = -1;
}

void INSERT() {
    if (R == n - 1) {
        cout << "Antrian Penuh!" << endl;
    } else {
        if (F == -1) {
            F = 0;
        }
        cout << "Masukkan Huruf : "; cin >> HURUF;
        R++;
        Q[R] = HURUF;
    }
}

void DELETE() {
    if (F == -1) {
        cout << "Antrian Kosong!" << endl;
    } else {
        cout << "Huruf " << Q[F] << " keluar dari antrian." << endl;
        // Geser elemen ke depan (Logika Modul 2)
        for (int i = F; i < R; i++) {
            Q[i] = Q[i + 1];
        }
        R--;
        if (R == -1) {
            F = -1;
        }
    }
}

void CETAKLAYAR() {
    if (F == -1) {
        cout << "Antrian Kosong!" << endl;
    } else {
        for (int i = F; i <= R; i++) {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
}

void RESET() {
    F = -1;
    R = -1;
    cout << "Antrian telah direset!" << endl;
}