#include <stdio.h>

void printPattern(int n){ // prosedur untuk membuat pattern kotak
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == 0 || j == 0 || i == n-1 || j == n-1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main(){ // fungsi main
	// meminta nilai untuk dimasukkan ke prosedur 
	int kotak1; scanf("%d", &kotak1);
	int kotak2; scanf("%d", &kotak2);
	int kotak3; scanf("%d", &kotak3);
	
	// memanggil fungsi
	printPattern(kotak1); printf("\n");
	printPattern(kotak2); printf("\n");
	printPattern(kotak3); printf("\n");
	return 0;
}