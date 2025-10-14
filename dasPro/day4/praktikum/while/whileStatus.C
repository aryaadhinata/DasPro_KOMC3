#include <stdio.h>


int main() {
    int angka;
    int koin = 100;


    while (koin > 0){
        printf("Masukkan jumlah koin yang digunakan: ");
        scanf("%d", &angka);
        koin -= angka;
        printf("Koin sekarang adalah: %d\n", koin);
    }


    printf("Koin sudah habis!\n");
    if (koin < 0) {
        printf("Malah lebih dari habis!\n");
    }
    printf("Koin kamu: %d\n", koin);


    return 0;
}
