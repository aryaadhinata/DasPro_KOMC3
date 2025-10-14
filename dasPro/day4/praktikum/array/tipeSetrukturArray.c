#include <stdio.h>
#include <string.h>


typedef struct {
    char judul[101];
    char penulis[51];
    int tahun_terbit;
} buku;


int main() {
    buku koleksi[4];


    strcpy(koleksi[0].judul, "Pemrograman_C");
    strcpy(koleksi[0].penulis, "Rosa");
    koleksi[0].tahun_terbit = 2020;


    strcpy(koleksi[1].judul, "Struktur_Data");
    strcpy(koleksi[1].penulis, "Rosa");
    koleksi[1].tahun_terbit = 2019;


    strcpy(koleksi[2].judul, "Pemrograman_Web");
    strcpy(koleksi[2].penulis, "Yudi");
    koleksi[2].tahun_terbit = 2021;


    strcpy(koleksi[3].judul, "Basis_Data");
    strcpy(koleksi[3].penulis, "Rani");
    koleksi[3].tahun_terbit = 2018;


    printf("\nData buku yang telah dimasukkan:\n");
    for (int i = 0; i < 4; i++) {
        printf("Judul: %s, Penulis: %s, Tahun Terbit: %d\n", koleksi[i].judul, koleksi[i].penulis, koleksi[i].tahun_terbit);
    }

    return 0;
}
