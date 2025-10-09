#include <stdio.h>

int main(){
	// deklarasi panjang array dan alokasi panjang arr.
	int arr1[1028], arr2[1028];
	int n;
	
	// meminta panjang array.
	printf("berapa panjang isi di dalam array?\n");
	scanf("%d", &n);
	
	// setup maximal setiap arr ke 0.
	int max1, max2;
	max1 = 0;
	max2 = 0;
	// meminta masukan untuk isi setiap array1.
	for(int i = 0; i < n; i++){
		printf("masukan nilai untuk arr1: ");
		scanf("%d", &arr1[i]);
		if(max1 < arr1[i]){
			max1 = arr1[i];
		}
	}		
	printf("====================================\n");
	// meminta masukan untuk isi setiap array2.
	for(int i = 0; i < n; i++){
		printf("masukan nilai untuk arr2: ");
		scanf("%d", &arr2[i]);
		if(max2 < arr2[i]){
			max2 = arr2[i];
		}
	}

	// mengeluarkan nilai max dari kedua array.
	printf("nilai jumlah nilai max kedua array: %d", (max1 + max2));
			
	return 0;
}