#include "hitungA.h"

int main(){
	int hasil;
	char str[50];
	scanf("%s", &str);
	hasil = jumlahA(str);
	printf("%d\n", hasil);

	scanf("%s", &str);
	printf("%d\n",jumlahA(str));

	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n",tambah(x, y));

	return 0;
}