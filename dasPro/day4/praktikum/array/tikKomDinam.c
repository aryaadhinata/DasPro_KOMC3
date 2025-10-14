#include <stdio.h>
#include <string.h>


typedef struct{
    char judul[101];
    char penulis[51];
    int tahun_terbit;
} buku;


int main() {
    int jumlah_buku;


    printf("Masukkan jumlah buku yang akan didata: ");
    scanf("%d", &jumlah_buku);


    buku koleksi[jumlah_buku];


    printf("Input Data Buku:\n");
    for (int i = 0; i < jumlah_buku; i++) {
        scanf("%s %s %d", koleksi[i].judul, koleksi[i].penulis, &koleksi[i].tahun_terbit);
    }


    printf("\n== Hasil Rekap Koleksi Buku ==\n");
    for (int i = 0; i < jumlah_buku; i++) {
        printf("(%d) Judul: %s\n", i + 1, koleksi[i].judul);
        printf("    Penulis: %s, Tahun: %d\n", koleksi[i].penulis, koleksi[i].tahun_terbit);
    }
   
    return 0;
}