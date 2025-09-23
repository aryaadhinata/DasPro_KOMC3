#include <stdio.h>

int main(){
	// deklarasi variabel untuk nilai yang nantinya akan di input user.
	int a, b;
	
	// meminta input ke user.
	printf("Masukan dua angka:\n");
	scanf("%d %d", &a, &b);
	
	// pengkondisian untuk bilangan pertama genap atau tidak.
	if(a % 2 == 0){
		printf("%d adalah bilangan genap\n", a);
	}
	else{
		printf("%d bukan bilangan genap\n", a);
	}
	
	// pengkondisian untuk bilangan kedua genap atau tidak.
	if(b % 2 == 0){
		printf("%d adalah bilangan genap\n", b);
	}
	else{
		printf("%d bukan bilangan genap\n", b);
	}

	return 0;
}

/*
	program/algoritma untuk mengecek input yang dimasukan users genap atau tidak
*/