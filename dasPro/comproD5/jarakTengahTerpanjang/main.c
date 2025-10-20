#include "jarakTengahTerpanjang.h"

int main(){
	// deklarasi titik
	int x1, y1, x2, y2, x3, y3;
	
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	
	// mengakses prosedur di mesin.c
	titikJauhTengah(x1, y1, x2, y2, x3, y3);
	return 0;
}