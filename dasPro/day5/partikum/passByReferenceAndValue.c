#include <stdio.h>

void fillCupByValue(int c){ // nilainya saja yang diubah
	c = c + 1;
}

void fillCupByRefence(int *c){ // di ubah si alamatnya
	*c = *c + 1;
}

int main(){
	int coffee = 0;
	printf("Nilai awal coffe: %d\n", coffee);
	
	fillCupByValue(coffee);
	printf("Nilai coffee setelah fillCupByValue: %d\n", coffee);
	
	fillCupByRefence(&coffee);
	printf("Nilai coffee setelah fillCupByRefence: %d\n", coffee);
	
	return 0;
}