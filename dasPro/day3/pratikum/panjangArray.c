#include <stdio.h>
#include <string.h>

int main(){
	// mendklarasikan panjang array.
	char str[51];
	
	// input string tidak perlu &.
	scanf("%s", str);
	
	// menghitung panjang string.
	int panjangStr = strlen(str);
	
	printf("%s memiliki panjang %d\n", str, panjangStr);
	return 0;
}