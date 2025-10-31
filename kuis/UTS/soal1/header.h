#include <stdio.h>
#include <string.h>

typedef struct Penghuni {
    char nama[50];
    int no_kamar;
} Penghuni;

// Prosedur untuk menampilkan nama miring (kamar ganjil)
void cetakMiring(char nama[], int *spasi);

// Prosedur untuk menampilkan nama vertikal terbalik (kamar genap)
void cetakLurusKebalik(char nama[], int *spasi);