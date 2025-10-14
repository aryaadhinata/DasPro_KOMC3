#include <stdio.h>

int main(){
	int penghitung, ketemu, n;
	
	scanf("%d", &n);
	int tabInt[n];
	for(penghitung = 0; penghitung < n; penghitung++){
		printf("masukkan angka:\n");
		scanf("%d", &tabInt[penghitung]);
		printf("\n");
	}
	ketemu = 0;
	penghitung = 0;

	while((tabInt[penghitung] != 999) && (penghitung < n)){
		printf("%d\n", tabInt[penghitung]);
		penghitung++;
	}
	
	return 0;
}