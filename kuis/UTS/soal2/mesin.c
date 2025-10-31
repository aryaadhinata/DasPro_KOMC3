#include "header.h"

//  prosedur cari nasgor berdasarkan topping akan menampilkan nasgor yang memiliki topping sesuai inputan
void cariNasgorByTopping(Nasgor nasgorList[], char cariTopping[], int n){
    int ketemu = 0, i = 0; // ketemu digunakan untuk menghentikan pencarian setelah menemukan 2 nasgor, i untuk iterasi
    do{ // menggunakan do while supaya bisa berhenti kalau sudah ketemu 2 nasgor atau sudah mencapai akhir array
        if(strcmp(nasgorList[i].topping, cariTopping) == 0){ // membandingkan topping nasgor dengan inputan menggunakan strcmp
            printf("%s %d\n", nasgorList[i].nama, nasgorList[i].harga); // kalau sama, tampilkan data nasgor
            ketemu += 1; // increment ketemu jika ditemukan nasgor dengan topping yang sesuai nah ini bakal menghentikan pencarian kalau sudah ketemu 2 nasgor
        } // tidak bikin else karena spesifikasi soal gaada kasus nasgornya ga ketemu atau gaada
        i++; // increment i untuk iterasi ke nasgor berikutnya
    } while (i < n && ketemu < 2); // kondisi berhenti: sudah mencapai akhir array atau sudah ketemu 2 nasgor
}

// fungsi untuk mencari index nasgor dengan harga termahal
int idxhargatermahal(Nasgor nasgorList[], int n){
    int idxmax = 0; // inisialisasi index max dengan 0
    for(int i = 1; i < n; i++){ // looping semua nasgor mulai dari index 1 karena index 0 sudah diinisialisasi sebagai max
        if(nasgorList[i].harga > nasgorList[idxmax].harga){ // membandingkan harga nasgor saat ini dengan harga nasgor pada index max
            idxmax = i; // jika harga nasgor saat ini lebih besar, update index max
        }
    }
    return idxmax; // kembalikan index nasgor dengan harga termahal
}

// prosedur untuk menampilkan semua data nasgor
void printNasgor(Nasgor nasgorList[], int n){
    for(int i = 0; i < n; i++){ // looping semua nasgor
        printf("%s %d\n", nasgorList[i].nama, nasgorList[i].harga); // tampilkan data nasgor
    }
}