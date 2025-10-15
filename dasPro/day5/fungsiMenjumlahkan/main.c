#include "penjumlah.h"

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("jumlahnya ada %d", jumlahInt(n, arr));
	return 0;
}