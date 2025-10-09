#include <stdio.h>

int main(){
	char c;
	
	// jika menggunaka do while maka akan di cek di lakukan sekali.
	do{
		printf("apakah Anda akan berputar lagi? (y/t)\n");
		scanf(" %c", &c);
	}while(c == 'y');
	
	return 0;
}