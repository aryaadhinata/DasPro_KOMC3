#include "penjumlah.h"
// memanggil library yang dibeuat

int main(){
	// deklarasi sekaligus meminta input
	int n;
	scanf("%d", &n);
	int arr[n];
	// looping untuk meminta input
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("jumlahnya ada %d", jumlahInt(n, arr));
	return 0;
}