#include <stdio.h>

int main(){
	int baris, kolom, star;
	
	printf("masukan bintang:");
	scanf("%d", &star);
	
	for(baris = 1; baris <= star; baris++){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	for(baris = star-1; baris >= 1; baris--){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}