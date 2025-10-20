#include <stdio.h>

void kalikanArrayDengan10(int arr[], int n){ // prosedur untuk mengubah niali arr
	for(int i; i < n; i++){
		arr[i] = arr[i] * 10;
	}
}

int main(){
	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	
	// menunjukan arr sebelum di ubah
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	// masuk ke prosedur
	kalikanArrayDengan10(arr, n);

	// menunjukan nilai setelah di ubah
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	return 0;
}