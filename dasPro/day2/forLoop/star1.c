#include <stdio.h>

int main(){
	int baris, kolom, star;
	
	printf("masukan bintang:");
	scanf("%d", &star);
	
	// membuat loop yang naik keatas dengan perbedaan n+1 dengan baris sebelumnya.
	for(baris = 1; baris <= star; baris++){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	// membuat loop yang turun kebawah dengan perbedaan n-1 dengan baris sebelumnya.
	for(baris = star-1; baris >= 1; baris--){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}