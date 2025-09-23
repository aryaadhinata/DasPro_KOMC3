#include <stdio.h>

int main(){
	int baris, kolom, star;
	
	printf("masukan bintang:");
	scanf("%d", &star);
	
	// membuat visualisasi loop dalam datu baris tetapi berulang.
	for(kolom = 1; kolom <= star; kolom++){
		printf("*");
	}
	printf("\n\n\n");
	
	// membuat visualisasi loop yang membentuk persegi.
	for(baris = 1; baris <= star; baris++){
		for(kolom = 1; kolom <= star; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	// membuat visualisai loop yang berbentuk segitiga siku siku.
	for(baris = 1; baris <= star; baris++){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}