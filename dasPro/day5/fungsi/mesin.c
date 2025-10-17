#include "hitungA.h" // memanggil file header yang berisi library dan juga nama fungsi

int jumlahA(char str[]){ // fungsi pertama yang digunakan untuk menghitung panjang karakter
	int i, j = 0;
	for(i=0;i<strlen(str);i++){
		if((str[i] == 'a') ||(str[i] == 'A')){
		j++;
		}
	}
	return j;
}
int tambah(int a, int b){ // fungsi kedua untuk menjumlahkan dua bilangan bulat
	int hasil = a + b;
	return hasil;
}