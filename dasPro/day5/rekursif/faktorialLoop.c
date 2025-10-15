#include <stdio.h>

int faktorial(int n){
	int i, hasil = 1;
	for(i=2; i<=n; i++){
		hasil = hasil * i;
	}
	
	return hasil;
}

int main(){
	int hasil = faktorial(3);
	printf("hasil faktorial: %d\n", hasil);

	return 0;
}