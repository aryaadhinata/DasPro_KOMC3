#include <stdio.h>

int main(){
	int n;
	printf("masukan besar array: ");
	scanf("%d", &n);
	
	int arr[n];

	for(int i = 0; i < n; i++){
		printf("masukan array index ke-%d: ", i);
		scanf("%d", &arr[i]);
	}
	
	int total = 0;
	for(int j =0; j < n; j++){
		total += arr[j];
	}
	
	int min = arr[0];
	int max = arr[0];
	
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	printf("Total nilai array = %d\n", total);
	printf("Minimal nilai di array = %d\n", min);
	printf("Maximal nilai di array = %d\n", max);
	
	return 0;
}