#include "header.h"

void cetakMiring(char nama[], int *spasi) {
    int i, j; // indeks loop i untuk karakter nama, j untuk spasi
    int len = strlen(nama); // panjang string nama

    // looping untuk setiap karakter dalam nama
    for (i = 0; i < len; i++) {
        // looping untuk mencetak spasi sebelum karakter
        for (j = 0; j < *spasi + i; j++) {
            printf(" ");
        }
        printf("%c\n", nama[i]); // cetak karakter nama
    }

    // tambahkan spasi untuk memajukan posisi ke kanan
    *spasi += len;
}

void cetakLurusKebalik(char nama[], int *spasi) {
    int i, j; // indeks loop i untuk karakter nama, j untuk spasi
    int len = strlen(nama); // panjang string nama

    // looping untuk setiap karakter dalam nama dari belakang
    for (i = len - 1; i >= 0; i--) { // mulai dari karakter terakhir makanya len - 1
        // looping untuk mencetak spasi sebelum karakter
        for (j = 0; j < *spasi; j++) { // spasi tetap sama untuk setiap karakter
            printf(" ");
        }
        // cetak karakter nama
        printf("%c\n", nama[i]);
    }

    // tambah spasi agar posisi tetap berlanjut ke kanan
    *spasi += 1; // kenapa 1 karena setiap karakter dicetak di baris baru
}