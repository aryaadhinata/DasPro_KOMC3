#include "hitungA.h"

int jumlahA(char str[]){
	int i, j = 0;
	for(i=0;i<strlen(str);i++){
		if((str[i] == 'a') ||(str[i] == 'A')){
		j++;
		}
	}
	return j;
}
int tambah(int a, int b){
	int hasil = a + b;
	return hasil;
}