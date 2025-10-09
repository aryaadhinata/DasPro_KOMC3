#include <stdio.h>

int main(){
	// alokasi banyak panjang array.
	int arr[1028];
	int n; 
	float sum, hasil;
	
	// meminta panjang array.
	printf("berapa panjang isi di dalam array?\n");
	scanf("%d", &n);
	
	// meminta nilai isi ke array.
	printf("masukan nilai :\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	// menjumlahkan semua nilai di array.
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	
	// membagi total array dengan banyak array agar mendapatkan rata rata.
	// ingat buat salah satu float agar mendapatkan nilai float
	hasil = sum/n;
	printf("rata rata nilai didalam array adalah: %0.2f", hasil);
	return 0;
}