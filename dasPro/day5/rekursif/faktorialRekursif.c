#include <stdio.h>

int faktorial(int n){ // fungsi yang akan menghitung faktorial nilai
	printf("n = %d\n", n);
	if((n ==0) || (n == 1)){
		return 1;
	}else{
		return (n * faktorial(n-1));
	}
}

int main(){ // main fungsi
	int hasil = faktorial(3);
	printf("hasil faktorial: %d\n", hasil);
	
	return 0;
}