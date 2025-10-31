#include "header.h"

int main() {
    int n; // jumlah nasgor
    scanf("%d", &n); // input jumlah nasgor

    // buat array of struct Nasgor untuk menyimpan data nasgor
    Nasgor nasgorList[n];

    // input data nasgor gunakan looping
    for(int i = 0; i < n; i++) {
        scanf("%s %s %d", nasgorList[i].nama, nasgorList[i].topping, &nasgorList[i].harga); // input nama, topping, dan harga nasgor
    }

    // deklarasi variabel untuk topping yang dicari
    char cariTopping[50];
    // input topping yang dicari scan string
    scanf("%s", cariTopping);

    // panggil prosedur untuk mencari nasgor berdasarkan topping
    printf("Nasi Goreng dengan topping %s:\n", cariTopping);
    // lihat parameternya kita perlu mengirim array nasgorList, topping yang dicari, dan jumlah nasgor
    cariNasgorByTopping(nasgorList, cariTopping, n); // tinggal memanggil ini maka bakal tampil nasgor dengan topping sesuai inputan

    printf("\nNasi Goreng Termahal:\n"); // menampilkan nasgor dengan harga termahal
    int mahal = idxhargatermahal(nasgorList, n); // panggil fungsi untuk mendapatkan index nasgor termahal
    // disini kita hanya menerima index nasgornya dari fungsi, jadi kita perlu menampilkan data nasgor menggunakan index tersebut
    printf("%s %d\n", nasgorList[idxhargatermahal(nasgorList, n)].nama, nasgorList[mahal].harga); // tampilkan data nasgor termahal

    // menampilkan semua menu nasgor
    printf("\nMenu Nasi Goreng:\n");
    printNasgor(nasgorList, n); // panggil prosedur untuk menampilkan semua data nasgor

    return 0;
}