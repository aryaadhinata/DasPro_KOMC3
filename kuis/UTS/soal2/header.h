#include <stdio.h>
#include <string.h>

// bikin dulu struct nasgor untuk menampung data nasgor
typedef struct Nasgor{
    char nama[50];
    char topping[50];
    int harga;
} Nasgor;

// prosedur cari nasgor berdasarkan topping akan menampilkan nasgor yang memiliki topping sesuai inputan
void cariNasgorByTopping(Nasgor nasgorList[], char cariTopping[], int n);
// fungsi untuk mencari index nasgor dengan harga termahal
int idxhargatermahal(Nasgor nasgorList[], int n);
// prosedur untuk menampilkan semua data nasgor
void printNasgor(Nasgor nasgorList[], int n);