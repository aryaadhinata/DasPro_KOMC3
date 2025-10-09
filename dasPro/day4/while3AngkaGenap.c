#include <stdio.h>

int main(){
	int penghitung, ketemu, n;
	
	scanf("%d", &n);
	int tabInt[n];
	printf("masukkan angka:\n");
	for(penghitung = 0; penghitung < n; penghitung++){
		scanf("%d", &tabInt[penghitung]);
	}
	printf("\n=================\n");
	ketemu = 0;
	penghitung = 0;

	while((penghitung < n) && (ketemu < 3)){
		if((tabInt[penghitung]) % 2 == 0){
			ketemu++;
			printf("%d\n", tabInt[penghitung]);
		}
		penghitung++;
	}
	
	return 0;
}