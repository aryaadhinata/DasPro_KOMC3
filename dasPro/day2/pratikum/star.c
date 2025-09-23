#include <stdio.h>

int main(){
	int i, j;
	int baris, kolom;
	
	// file yang salah
	printf("masukan kolom & baris:");
	scanf(" %d %d", &kolom, &baris);
	scanf(" %d", &j);
	
	for (i = 0; i < j; i++){
		printf("halo halo!!! ");
	}
	printf("\n\n\n");
	
	for (i = 0; i < kolom; i++){
		for(j = 0; j < baris; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	for (i = 0; i < kolom; i++){
		for(j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for (i = 0; i < kolom; i++){
		for(j = 0; j < baris; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for (i = kolom; i >= 0; i--){
		for(j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i = 0; i < kolom; i++){
		for(j = baris; j > i; j--){
			printf(" ");
		}
		
		for(j = 0; j < baris; j++){
			printf("%d",(i + j + 1) % 10);
		}
		printf("\n");
	}
	return 0;
}