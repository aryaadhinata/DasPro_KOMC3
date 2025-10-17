#include <stdio.h> //library input 

int faktorial(int n){ //fungsi faktorial membalikan nilai hasil
	int i, hasil = 1;
	for(i=2; i<=n; i++){
		hasil = hasil * i;
	}
	
	return hasil;
}

int main(){ //fungsi utama
	int hasil = faktorial(3); // memanggil fungsi faktorial untuk input
	printf("hasil faktorial: %d\n", hasil);

	return 0;
}