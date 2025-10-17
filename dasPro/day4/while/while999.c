#include <stdio.h>

int main(){
	// deklarasi variabel
	int penghitung, ketemu, n;
	
	// meminta input
	scanf("%d", &n);
	int tabInt[n];
	
	// menghitung sampai n
	for(penghitung = 0; penghitung < n; penghitung++){
		printf("masukkan angka:\n");
		scanf("%d", &tabInt[penghitung]);
		printf("\n");
	}
	// set out value
	ketemu = 0;
	penghitung = 0;
	
	// mengulang selama belum mendapat 999 dan kurang dari n
	while((tabInt[penghitung] != 999) && (penghitung < n)){
		printf("%d\n", tabInt[penghitung]);
		penghitung++;
	}
	
	return 0;
}