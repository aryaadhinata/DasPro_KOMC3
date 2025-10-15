#include "penjumlah.h"

int jumlahInt(int n, int arr[n]){
	int hasil = 0;
	for(int i = 0; i < n; i++){
		hasil += arr[i];
	}
	return hasil;
}