#include "Jason.h"

void ASCII(char arr[][513], int j){
	// setup nilai awal ke nilai index ke 0
	int z = arr[j][0],
		y = arr[j][0],
		x = arr[j][0];
	for(int k = 1; k < strlen(arr[j]); k++){
		if(z > arr[j][k]){
			z = arr[j][k]; // nilai minimum
		}
		if(y < arr[j][k]){
			y = arr[j][k]; // nilai maksimum
		}
		x += arr[j][k]; // jumlah ASCII
	}
	printf("Terkecil: %c dengan nilai ASCII %d\n", z, z);
	printf("Terbesar: %c dengan nilai ASCII %d\n", y, y);
	
	// pengkondisian untuk ASCII genap atau ganjil.
	if(x % 2 == 0){
		printf("Jumlah ASCII: %d yang merupakan bilangan genap\n", x);
	}else {
		printf("Jumlah ASCII: %d yang merupakan bilangan ganjil\n", x);
	}
}