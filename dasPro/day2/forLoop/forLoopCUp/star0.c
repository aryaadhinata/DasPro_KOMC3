#include <stdio.h>

int main(){
	int baris, kolom, star;
	
	printf("masukan bintang:");
	scanf("%d", &star);
	
	for(kolom = 1; kolom <= star; kolom++){
		printf("*");
	}
	printf("\n\n\n");
	
	for(baris = 1; baris <= star; baris++){
		for(kolom = 1; kolom <= star; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	for(baris = 1; baris <= star; baris++){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}