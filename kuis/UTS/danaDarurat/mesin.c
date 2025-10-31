#include "danaDarurat.h"

void punyaDana(int i, char nama[][513], char kota[][513], int dana[]){
	printf("%s\n", nama[i]); 
	// looping untuk membuat miring
	for(int a = 0; a < strlen(kota[i]); a++){
		// looping bikin kotak
		for(int b = 0; b < (strlen(nama[i])-1); b++){
			printf(" ");
		}
		//looping buat bikin segita countup
		for(int b = 0; b < a; b++){
			printf(" ");			
		}
		printf("%c", kota[i][a]);
		printf("\n");
	}
	
	int space = strlen(nama[i]) + strlen(kota[i]);
	for(int a = 0; a < space-2; a++){
		printf(" ");
	}
	printf("%d\n", dana[i]);
	//printf("iya\n");
}

void tidakPunyaDana(int i, char nama[][513], char kota[][513], int dana[]){
	int space = strlen(nama[i]) + strlen(kota[i]);
	//looping buat bikin spasi sepanjan panjang string nama dan kota
	for(int a = 0; a < space-2; a++){
		printf(" ");
	}
	printf("%d\n", dana[i]);
	//looping untuk buat miring
	for(int a = 0; a < strlen(kota[i]); a++){
		// looping bikin kotak
		for(int b = 0; b < (strlen(nama[i])-1); b++){
			printf(" ");
		}
		// looping untuk membuat segitiga countsown
		for(int b = strlen(kota[i]) - (a + 1); b > 0; b--){
			printf(" ");
		}
		printf("%c", kota[i][a]);
		printf("\n");
	}
	printf("%s\n", nama[i]);
	//printf("tidak\n");
}