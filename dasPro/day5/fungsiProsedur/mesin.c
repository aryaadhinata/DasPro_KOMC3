#include "pola.h" // memanggil library yang ada di header

void pola(int n){ // fungsi mesin yang akan digunakan
	int i, j;
	for(i=1;i<=n;i++){
		for(j=1; j<=n; j++){
			printf("*");
		}
		printf("\n");
	}
}