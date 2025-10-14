#include <stdio.h>
#include <string.h>


int main() {
    int n;
    scanf("%d", &n);


    char arr_of_str[n][51]; // Deklarasi array of string


    for(int i = 0; i < n; i++){
        scanf("%s", arr_of_str[i]); // Scan string ke-i.
    }


    int jml = 0; // Jumlah string yang dicari dlm arr of str
    char dicari[51]; // String yang akan dicari


    scanf("%s", dicari); // Scan string yang dicari user


    // Loop CARII
    for(int i = 0; i < n; i++){
        // cek apakah string sekarang string yang dicari?
        if (strcmp(arr_of_str[i], dicari) == 0){
            jml++; // Jika sama, tambahkan penghitung
        }
    }


    if (jml == 0){
        printf("string '%s' tidak ditemukan..\n", dicari);
    } else {
        printf("string '%s' ditemukan sebanyak %d kali!\n", dicari, jml);
    }


    return 0;
}
