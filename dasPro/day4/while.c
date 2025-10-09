#include <stdio.h>

int main(){
	// mendeklarasikan vaiabel dan mengalokasikan panjang array.
	int penghitung, tabInt[5], ketemu;
	
	// meminta input untuk mengisi array.
	for(penghitung = 0; penghitung < 5; penghitung++){
		printf("masukkan angka:\n");
		scanf("%d", &tabInt[penghitung]);
		printf("\n");
	}
	
	// seting nilai ketemu dan penghitung dengan 0.
	ketemu = 0;
	penghitung = 0;
	
	// looping selama belum ketemu nilai ganjil.
	while((ketemu == 0) && (penghitung < 5)){
		if((tabInt[penghitung] % 2) ==1){
			ketemu = 1;
		}else{
			penghitung = penghitung + 1;
		}
	}
	
	// pengkondisian jika ketemu nilai ganjil yang harus di print.
	if(ketemu == 0){
		printf("tidak ada angka ganjil\n");
	}else{
		printf("ada angka ganjil\n");
	}
	
	return 0;
}