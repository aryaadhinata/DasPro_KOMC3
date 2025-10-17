#include "penjumlah.h"

int jumlahInt(int n, int arr[n]){ 
// fungsi yang akan digunakan
// fungsi yang berfungsi untuk mengitung banyak nilai dari nilai yang di inputkan di array
	int hasil = 0;
	for(int i = 0; i < n; i++){
		hasil += arr[i];
	}
	return hasil;
}