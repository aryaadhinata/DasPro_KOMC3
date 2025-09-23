#include <stdio.h>

int main(){
	int i, j, k, l;
	scanf(" %d", &j);
	
	// membuat loop biasa yang statis
	for (i = 0; i < 10; i++){
	printf("im enough %d\n", i);
	}
	
	// membuat loop yang lebih dinamis
	for (i = 0; i < j; i++){
	printf("im enough %d\n", i);
	}
	
	// dua loop dibawah untuk menbuat gaya tulisan yang miring selama j dengan diawali 1
	k = 0;
	for (i = 1; i <= j; i++){
		k += i; 
	}
	
	l = 1;
	for (i = 1; j >= i; i++){
		l *= i; 
	}
	
	printf("\n %d", l);
	printf("\n %d", k);
	return 0;
}