#include "hitungA.h"

int main(){
	int hasil;
	char str[50];
	scanf("%s", &str);
	hasil = jumlahA(str);//menggunakan fungsi yang ada di mesin.c
	printf("%d\n", hasil);

	scanf("%s", &str);
	printf("%d\n",jumlahA(str)); // menggunakan fungsi mesin yang di mesin.c

	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n",tambah(x, y)); // menggunakan fungsi yang ada di mesin.c

	return 0;
}