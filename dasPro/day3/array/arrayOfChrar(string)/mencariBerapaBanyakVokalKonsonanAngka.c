#include <stdio.h>
#include <string.h>

// bungkusan untuk jumlah.
typedef struct{
	int jumlah;
}atr;

int main(){
	// mengalokasikan panjang string dan mendeklarasikan variabel lain.
	char str[50];
	scanf("%s", &str);
	int i;
	atr vokal, konsonan, angka;
	
	// mengset nilai 0.
	vokal.jumlah = 0;
	konsonan.jumlah = 0;
	angka.jumlah = 0;	
	
	// looping untuk mencari berapa banyak vokal.
	for(i = 0; i < strlen(str); i++){
		if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u'
		|| str[i] == 'e' || str[i] == 'o'){
			vokal.jumlah++;
		}
	}
	
	// looping untuk mencari berapa banyak konsonan.
	for(i = 0; i < strlen(str); i++){
		if(str[i] != 'a' && str[i] != 'i' && str[i] != 'u'
		&& str[i] != 'e' && str[i] != 'o' && str[i] != '1' 
		&& str[i] != '2' && str[i] != '3' && str[i] != '4' 
		&& str[i] != '5' && str[i] != '6' && str[i] != '7' 
		&& str[i] != '8' && str[i] != '9' && str[i] != '0'){
			konsonan.jumlah++;
		}
	}	

	// looping untuk mencari berapa banyak angka.
	for(i = 0; i < strlen(str); i++){
		if(str[i] == '1' || str[i] == '2' || str[i] == '3'
		|| str[i] == '4' || str[i] == '5' || str[i] == '6' 
		|| str[i] == '7' || str[i] == '8' || str[i] == '9' 
		|| str[i] == '0'){
			angka.jumlah++;
		}
	}
	
	// mengeluarkan nilai banyak vokal, konsonan dan angka.
	printf("banyak vokal: %d\n", vokal.jumlah);
	printf("banyak konsonan: %d\n", konsonan.jumlah);
	printf("banyak angka: %d\n", angka.jumlah);
	return 0;
}