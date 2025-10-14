#include <stdio.h>


int main() {
    int data[6] = {15, 23, 8, 45, 10, 32};
    int cari = 45; 

    int i = 0;
    int ditemukan = 0;

    while (i < 6 && ditemukan == 0) {
        if (data[i] == cari) {
            ditemukan = 1;
        } else {
            i++;
        }
    }

    printf("\n");

    if (ditemukan == 1) {
        printf("Yeayy! Angka %d ada di indeks ke-%d!\n", cari, i);
    } else {
        printf("Yah... Angka %d tidak ditemukan..\n", cari);
    }

    return 0;
}
