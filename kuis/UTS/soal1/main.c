#include "header.h"

int main() {
    int n, i; // jumlah penghuni dan indeks loop
    int spasi = 0; // variabel spasi awal untuk mengatur posisi cetak

    // input jumlah penghuni
    scanf("%d", &n);
    Penghuni input[n]; // array untuk menyimpan data penghuni

    // input data penghuni
    for (i = 0; i < n; i++) {
        scanf("%s %d", input[i].nama, &input[i].no_kamar);
    }

    // output hasil cetak sesuai aturan kamar ganjil/genap
    printf("\nOutput:\n");
    // loop melalui setiap penghuni
    for (i = 0; i < n; i++) {
        if (input[i].no_kamar % 2 == 0){ // jika kamar genap
            cetakLurusKebalik(input[i].nama, &spasi); // panggil fungsi cetakLurusKebalik
        }
        else{ // jika kamar ganjil
            cetakMiring(input[i].nama, &spasi); // panggil fungsi cetakMiring
        }
    }

    /*
    spasi = 6
        a
        -m
        --i
        ---r
        ----g
        ----n
        ----a
        ----n
        ----a
        ----d
        -----n
        -----i
        -----t
        -----i
        -----t
        ------t
        -------i
        --------n
        ---------o
    */

    return 0;
}