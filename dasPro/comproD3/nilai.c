#include <stdio.h>

int main(){
	// mengalokasikan panjang array, dan juga pendeklarasian n untuk
	// panjang array, float sum dan hasil agar menghasilakan nilai float.
	int arr[1028];
	int n; 
	float sum, hasil;
	
	// meminta panjang array, dan mengisinya.
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	// mendeklarasi nilai max dan min dengan nilai arr[0] (pertama).
	int max, min;
	max = arr[0];
	min = arr[0];
	// looping untuk mencari nilai max.
	for(int i = 0; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	// looping untuk mencari nilai min.
	for(int i = 0; i < n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	
	// menjumlahkan semua nilai di array.
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	
	// hasil adalah rata rata.
	hasil = sum/n;
	
	// pendeklasian untuk menandai nilai yang lebih besar atau kecil dari rata rata.
	int cUp, cDown;
	cUp = 0;
	cDown = 0;
	for(int i = 0; i < n; i++){
		if(hasil > arr[i]){
			cUp++;
		}
	}	
	for(int i = 0; i < n; i++){
		if(hasil < arr[i]){
			cDown++; 
		}
	}
	
	// mengeluarkan nilai yang diinginkan.
	printf("Nilai terendah: %d\n", min);
	printf("Nilai tertinggi: %d\n", max);
	printf("Rata-rata nilai: %0.2f\n", hasil);
	printf("Jumlah siswa di atas rata-rata: %d\n", cUp);
	printf("Jumlah siswa di bawah rata-rata: %d\n", cDown);
	
	return 0;
}