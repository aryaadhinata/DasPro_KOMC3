#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &tabInt[i]);
	}
	
	for(i = 0; i < n; i++){
	printf("|");
		if(tabInt[i] % 2 == 1 && tabInt[i] % 5 == 0){	
			printf("%d", tabInt[i]);
		}
	printf("|\n");
	}
	return 0;
}

//mengisis array (hanya yang ganjil dan kelipatan 5)