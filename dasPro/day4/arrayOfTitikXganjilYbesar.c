#include <stdio.h>

typedef struct{
int x;
int y;
}titik;

int main(){
	int n, i;
	scanf("%d", &n);
	titik ikatan_titik[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &ikatan_titik[i].x);
		scanf("%d", &ikatan_titik[i].y);
	}
	
	printf("\n================================\n");
	for(i=0;i<n;i++){
		if((ikatan_titik[i].x % 2 )== 1){
			printf("ini x ganjil : ");
			printf("%d\n", ikatan_titik[i].x);
		}
		if(ikatan_titik[i].x < ikatan_titik[i].y){
			printf("ini y yang lebih besar dari x : ");
			printf("%d\n", ikatan_titik[i].y);
		}
	}

	return 0;
}