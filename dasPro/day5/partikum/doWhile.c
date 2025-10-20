#include <stdio.h>

int main(){
	int angka;
	
	do { // do mengecek nilai setidaknya sekali
		printf("Masukan angka antara 1-10: ");
		scanf("%d", &angka);
	}while(angka < 1 || angka > 10);
	
	printf("Angka yang anda masukan %d, angka ini valid.", angka);
	
	return 0;
}