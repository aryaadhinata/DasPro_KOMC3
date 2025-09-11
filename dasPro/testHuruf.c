#include <stdio.h>

int main(){
	char ka, kb, kc;
	int x, y, z;
	x = 0, y = 0, z = 0;
	
	printf("Masukan tiga karakter (dengan syarat urutan konsonan vokal konsonan):\n");
	scanf("%c %c %c", &ka, &kb, &kc);
	
	if((ka != 'a') && (ka != 'i') && (ka != 'u') && (ka != 'e') && (ka != 'o')){
		x = 1;
	}
	if((kb == 'a') || (kb == 'i') || (kb == 'u') || (kb == 'e') || (kb == 'o')){
		y = 1;
	}
	if((kc != 'a') && (kc != 'i') && (kc != 'u') && (kc != 'e') && (kc != 'o')){
		z = 1;
	}	

	if((x == 1) && (y == 1) && (z == 1)){
		printf("memenuhi syarat\n");
	}else{
		printf("tidak memenuhi syarat\n");
	}

	return 0;
}