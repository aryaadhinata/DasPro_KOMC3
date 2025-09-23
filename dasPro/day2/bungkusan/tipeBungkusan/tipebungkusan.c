#include <stdio.h>

/*
	bagian fungsi yang dapat membungkus nilai jika suatu saat nilai itu akan digunakan
	kembali.
*/ 
typedef struct{
	int x, y;
}titik;

int main(){
	// contoh penggunaannya
	titik p1;
	
	printf("masukkan nilai koordinat x:\n");
	scanf("%d", &p1.x);
	printf("\nmasukkan nilai koordinat y:\n");
	scanf("%d", &p1.y);
	printf("titik yang Anda masukkan:\n");
	printf("x: %d\n", p1.x);
	printf("y: %d\n", p1.y);
	
	return 0;
}