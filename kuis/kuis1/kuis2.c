#include <stdio.h>

/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan kuis dalam 
	mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/


int main(){
    int i, j, k, l, n;
	scanf("%d", &n);
	
	// bagian layar diatas
    for(i = 1; i < 7*n+5; i++){
		for(j=0; j < 3*n+7; j++){
			printf(" ");
		}
		for(k = 0; k < i ; k++){
			printf("*");
		}
		printf("\n");
	}
	
	// bagian pinggiran perahu
	for(i = 1; i < n; i++){
		for(j = n; j > i; j--){
			printf("-");
		}
		for(k = 0; k <= i-1; k++){
			for(l = 0; l < i; l++){
				printf("*");
			}
		}
	printf("\n");
	}
	
	//printf("%d",  7*n+4);

	return 0;
}