#include <stdio.h>

int main(){
	int x;
	scanf(" %d", &x);
	
	switch(x){
		case 1: 
			printf("angka yang kamu masukan adalah 1");
			break;
		}
		case 2: 
			printf("angka yang kamu masukan adalah 2");
			break;
		
		default: 
			printf("bukan 1 atau 2");
	}
	return 0;
}