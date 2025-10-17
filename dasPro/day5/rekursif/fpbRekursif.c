#include <stdio.h>

int CariFPB(int a, int b) { // fungsi yang akan digunakan untuk menghitung fpb
	if(b==0){
		return a;
	}else {
		int temp = a % b;
		return CariFPB(b, temp);
	}
}

int main(){ // main fungsi
	int hasil = CariFPB(18, 12);
	printf("hasil fpb: %d\n", hasil);

	return 0;
}