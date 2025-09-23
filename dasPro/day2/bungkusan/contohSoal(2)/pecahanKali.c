#include <stdio.h>

typedef struct{
	int pembilang, penyebut;
}pecahan;

int main(){
	
	pecahan p1, p2, p3;
	
	printf("masukan pambilang dan penyebut dari pecahan pertama:\n");
	scanf("%d %d", &p1.pembilang, &p1.penyebut);

	printf("masukan pambilang dan penyebut dari pecahan kedua:\n");
	scanf("%d %d", &p2.pembilang, &p2.penyebut);
	
	p3.pembilang = p1.pembilang * p2.pembilang;
	p3.penyebut = p1.penyebut * p2.penyebut;
	
	printf("\n perkalian pecahan yang dihasilkan adalah: %d / %d \n", p3.pembilang, p3.penyebut);

	return 0;
}