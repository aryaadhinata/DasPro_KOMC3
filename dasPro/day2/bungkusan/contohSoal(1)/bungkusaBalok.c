#include <stdio.h>

typedef struct{
	int panjang, lebar, tinggi, luasPermukaan, volume;
}balok;

int main(){
	// contoh lain penggunaan typedef untuk membungkus
	balok b;
	
	printf("masukan panjang, lebar dan tinggi dari balok:\n");
	scanf("%d %d %d", &b.panjang, &b.lebar, &b.tinggi);
	
	b.luasPermukaan = 2 * ((b.panjang * b.lebar) + (b.lebar * b.tinggi) + (b.panjang * b.tinggi));
	b.volume = b.panjang * b.lebar * b.tinggi;
	
	printf("\n luas permukaan balok adalah: %d\n", b.luasPermukaan);
	printf("\n Volume balok adalah : %d\n", b.volume);
	return 0;
}

/*
	Buatlah bungkusan balok yang berisi panjang, lebar, tinggi,
	luaspermukaan, dan volume. Mintalah masukan dari user untuk
	mengisi panjang, lebar, tinggi kemudian hitung luaspermukaan dan
	volume dari balok.
*/