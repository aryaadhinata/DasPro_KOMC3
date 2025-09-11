#include <stdio.h>

int main(){
	// deklarasi bilangan bulat untuk variabel input awal, digit 1, 2, 3, dan 4.
	int awal, d1, d2,
		d3, d4;
	
	// input users bilangan empat digit untuk diolah.
	printf("Masukan bilangan ribuan (empat digit):\n");
	scanf("%d", &awal);
	
	// operasi untuk memisahkan setiap digit.
	d4 = awal % 10000;
	d3 = awal % 1000;
	d2 = awal % 100;
	d1 = awal % 10;
	d4 = (d4 -d3 )/ 1000;
	d3 = (d3 - d2)/ 100;
	d2 = (d2 - d1)/ 10;
	
	// hasil yang ditampilkan.
	printf("satuan: %d\n", d1);
	printf("puluhan: %d\n", d2);
	printf("ratusan: %d\n", d3);
	printf("ribuan: %d\n", d4);

	return 0;
}

/*
	Membuat algoritma dan program untuk menampilkan angka satuan, 
	puluhan, ratusan, dan ribuan dari sebuah angka integer masukan,
*/