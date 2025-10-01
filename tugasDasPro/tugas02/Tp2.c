#include <stdio.h>

/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan Tugas Pratikum 2 dalam 
	mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

/*
	mendeklarasikan typedef yang digunakan untuk membungkus bagian atribut dari
	helikopter yaitu tinggi, panjang gap level dan ekor.
*/

typedef struct{
	int tinggi, level, ekor;
}atr;

int main(){
/*
	deklarasi variabel yang akan digunakan secara luas di dalam kode, diantaranya: 
	- powerUP, 
	- winHer untuk menghitung banyak menang melawan Heretic, 
	- winAel untuk menghitung banyak menang melawan Aeldarian, 
	deklarasi penamaan helikopter yang nantinya akan diberikan atribut: 
	- heli untuk helikopter milik Komandan Valerius,
	- heliHer untuk helikopter Heretic,
	- heliAel untuk Helikopter Aeldarian,
	serta deklarasi char chasis yang nantinya akan diisi oleh user untuk menentukan
	jenis chassis.
*/ 
	int powerUp, winHer, winAel;
	atr heli, heliHer, heliAel;
	char chasis;
	
	// meminta input untuk tinggi dan jenis chassis helikopter Komandan Valerius.
	scanf("%d %c", &heli.tinggi, &chasis);
	
/*
	meminta input untuk mengisi tinggi, panjang gap level dan ekor dari helikopter
	Heretic dan Aeldarian.
*/
	scanf("%d %d %d", &heliHer.tinggi, &heliHer.level, &heliHer.ekor);	
	scanf("%d %d %d", &heliAel.tinggi, &heliAel.level, &heliAel.ekor);
	scanf("%d", &powerUp);
	
	// pengkondisian untuk menentukan jenis chassis yang akan digunakan.
	switch (chasis){
		case 'C' : {
			heli.level = 8;
			heli.ekor = 16;
			break;
		}
		case 'S' : {
			heli.level = 6;
			heli.ekor = 14;
			break;
		}
		case 'V' : {
			heli.level = 4;
			heli.ekor = 12;
			break;
		}
	}
	
	// pengkondisian untuk menentukan jenis powerUP yang akan digunakan oleh Komandan Valerius.
	switch (powerUp) {
		case 1 : {
			heli.tinggi += 4;
			printf("Kemampuan Aktif: Helikopter diperbesar, kapasitas senjata ditingkatkan.\n");
			break;
		}		
		case 2 : {
			heli.ekor += 2;
			printf("Kemampuan Aktif: Ekor diperpanjang, manuver lebih lincah.\n");
			break;
		}		
		case 3 : {
			heli.level = 4;
			printf("Kemampuan Aktif: Pengacau Sensor! Badan helikopter musuh terdeteksi lebih lebar.\n");
			break;
		}
	}
	
	printf("\n--- VISUALISASI HELIKOPTER TEMPUR ---\n");

/*
	deklarasi variabel yang nantinya hanya digunakan untuk pengulangan saja, diantaranya:
	- heliCup untuk mengitung tinggi bagian atas helikopter,
	- badan untuk menandai karakter yang akan ditampilkan nanti,
	- ekor untuk menandai karakter yang akan ditampilkan nanti.
*/
	int heliCup = (heli.tinggi + 1) / 2;	
	int badan = 65;
	int ekor = 65;
	
	// pengulangan bagian baling baling.
	printf("  ");
	for(int g = 0; g < (((heli.tinggi*heli.level)/2)-2); g++){
		printf("<");
	}
	for(int h = 0; h < (((heli.tinggi*heli.level)/2)-2); h++){
		printf(">");
	}
	
	printf("\n");
	
	// pembuatan setengah bagian atas dari helikopter.
	for (int i = 1; i <= heliCup; i++) {
		// membuat bagian badan atas.
		for (int j = (heli.level*(heliCup-i)); j > 0; j--) {
			printf(" ");
		}
		for (int k = 0; k < (heli.level*((i*2)-1)); k++) {
			printf("%c", badan);
		}
		badan++;
		if(badan > 90){
			badan = 65;
		}
		// membuat bagian penghubung ke ekor dan juga membuat jarak ke ekor.
		if(heliCup-i < 2){
			for(int l = 0; l < heli.ekor; l++){
				printf("(");
			}
			if(heliCup-i == 1){
				for(int m = 0; m < heli.level; m++){
					printf(" ");
				}
			}
		}
		else{
			for(int m = 0; m < ((heli.level*(heliCup-i))+heli.ekor); m++){
				printf(" ");
			}
		}
		// membuat bagian ekor.
		for(int n = heliCup-i; n > 0; n--){
			printf(" ");
		}
		for(int o = 0; o < ((2*i)-1); o++) {
			printf("%c", ekor);
			ekor++;
			if(ekor > 90){
				ekor = 65;
			}
		}
	printf("\n");
	}

	// membuat setengah bagian bawah dari helikopter.
	for (int i = heliCup-1; i > 0; i--) {
		// membuat bagian badan bawah.
		for (int j = 0; j < (heli.level*(heliCup-i)); j++) {
			printf(" ");
		}
		for (int k = (heli.level*((i*2)-1)); k > 0; k--) {
			printf("%c", badan);
		}
		badan++;
		if(badan > 90){
			badan = 65;
		}
		// membuat bagian penghubung ke ekor dan juga membuat jarak ke ekor.
		if(heliCup-i <= 1){
			for(int l = 0; l < heli.ekor; l++){
				printf("(");
			}
			for(int m = 0; m <= heli.level; m++){
				printf(" ");
			}
		}
		else{
			for(int m = 0; m <= ((heli.level*(heliCup-i))+heli.ekor); m++){
				printf(" ");
			}
		}
		// membuat bagian ekor.
		for(int n =0 ; n < ((heliCup-i)-1); n++){
			printf(" ");
		}
		for(int o = ((2*i)-1); o > 0; o--) {
			printf("%c", ekor);
			ekor++;
			if(ekor > 90){
				ekor = 65;
			}
		}
	printf("\n");
	}

	printf("\n--- Spesifikasi Final Helikopter Ultramarine ---\n");
	
	// menunjukan spesifikasi dari helikopter Komandan Valerius.
	printf("> Tinggi Helikopter: %d\n", heli.tinggi);
	printf("> gap per level: %d\n", heli.level);
	printf("> Panjang ekor: %d\n", heli.ekor);
	
	printf("\n--- ANALISIS HASIL PERTEMPURAN ---\n");
	
	// menandai setiap kemengan helikopter Komandan Valerius.
	winHer = 0;
	winAel = 0;
	if(heli.ekor > heliHer.ekor){
		winHer += 1;
	}
	if(heli.level < heliHer.level){
		winHer += 1;
	}
	if(heli.ekor > heliAel.ekor){
		winAel += 1;
	}
	if(heli.level < heliAel.level){
		winAel += 1;
	}
	
	// pengkondisian untuk menentukan kemenangan helikopter Komandan Valerius.
	// bagian kemenangan atas helikopter Heretic.
	if(winHer == 2){
		printf("Vs. Heretic -> Superioritas Udara Tercapai! Musuh mundur.\n");
	}else if(winHer == 1){
		printf("Vs. Heretic -> Pertarungan Sengit! Menang tipis, helikopter mengalami kerusakan.\n");
	}else {
		printf("Vs. Heretic -> Kekalahan Telak! Helikopter rusak berat.\n");
	}	
	
	// bagian kemenangan atas helikopter Aeldarian.
	if(winAel == 2){
		printf("Vs. Aeldarian -> Superioritas Udara Tercapai! Musuh mundur.\n");
	}else if(winAel == 1){
		printf("Vs. Aeldarian -> Pertarungan Sengit! Menang tipis, helikopter mengalami kerusakan.\n");
	}else {
		printf("Vs. Aeldarian -> Kekalahan Telak! Helikopter rusak berat.\n");
	}
	
	return 0;
}