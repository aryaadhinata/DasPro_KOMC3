#include <stdio.h>

int main(){
	/*
	Deklarasi variable tipe integer untuk lebar dan tinggi yang di misalkan dengan
	x dan y, serta tipe float untuk luasnya.
	*/
	int x, y;
	float luas;
	
	//Meminta masukan users yang nantinya akan di simpan ke x atau y.
	printf("Masukan lebar segitiga:\n");
	scanf("%d", &x);
	printf("Masukan tinggi segitiga:\n");
	scanf("%d", &y);
	
	//proses mencari luas segitiga.
	luas = (x * y)/5;
	
	//output yang nantinya akan dimunculkan bersama hasil penghitungan luas segitiga
	printf("Maka luas segitiganya adalah: %0.3f", luas);
	
	return 0;
}

/*
Membuat algoritma untuk menghitung luas sebuah segitiga.
*/