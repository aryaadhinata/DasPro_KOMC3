#include <stdio.h>

int main(){
	int harga;
	printf("masukan nilai belanjaan:");
	scanf("%d", &harga);
	
	if(harga >= 50){
		printf("selamat anda mendapat diskon!!!\n");
	}
	else{
		printf("anda kurang %d lagi untuk mendapatkan diskon\n", (50-harga));
	}
	printf("terimakasih sudah berbelanja");
	
	return 0;
}