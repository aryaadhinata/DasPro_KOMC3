#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &tabInt[i]);
	}
	
	for(i = 0; i < (n/2); i++){
		printf("%d", tabInt[i]);
		printf("|");
	}
	
	printf("|\n");
	for(i = (n/2); i < n ; i++){
		printf("%d", tabInt[i]);
		printf("|");
	}
	
	printf("|\n");
	for(i = (n-1); i >= (n/2); i--){
		printf("%d", tabInt[i]);
		printf("|");
	}
	
	printf("|\n");
	for(i = (n/2); i > 0; i--){
		printf("%d", tabInt[i]);
		printf("|");
	}	
	
	return 0;
}

// menampilkan separuh isi array.