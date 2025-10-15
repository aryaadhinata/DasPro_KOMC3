#include <stdio.h>
#include <string.h>

/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan tes pemrogaraman
	dalam mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

typedef struct{
	char kata[1025];
}string;

typedef struct{
	int sekarang, set, jalan;
}masa;

int main(){
	//============================= deklarasi =============================
	int i, j, m, n, key, waktuPerjalanan, strip, menitJalan, jamJalan,
		waktuEnkripsi, jarak[513], menitTempuh[513];
	char c;
	string misi[513], pesan[513];
	masa jam, menit;
	
	//============================== input ================================
	// input selama belum ada kata done.
	m = 0;
	strcpy(misi[0].kata, "null");
	while(strcmp(misi[m].kata, "done") != 0){
		scanf("%s", misi[m].kata);
		if(strcmp(misi[m].kata, "done") != 0){
			scanf("%d", &jarak[m]);
			scanf("%d", &menitTempuh[m]);			
			m++;
		}
	}

	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s", pesan[i].kata);
	}
	
	scanf("%d %d", &jam.sekarang, &menit.sekarang);
	scanf("%d", &waktuPerjalanan);
	
	//========================== proses & output ==========================
	// menghitung banyak waktu yang dibutuhkan di jarak terdekat & menggitung waktu keseluruhannya
	menitJalan = 0;
	jamJalan = 0;
	printf("Close destinations! Start right away!\n");
	j = 1;
	for(i = 0; i < m; i++){
		if(jarak[i] >= 1 && jarak[i] <= 5){
			printf("%d. %s: %d hour(s) %d minute(s)\n", 
					j, misi[i].kata, menitTempuh[i]/60, menitTempuh[i]%60);
			j++;
		}
		menitJalan += menitTempuh[i];
	}
	// menghitung banyak waktu yang dibutuhkan di jarak terjauh.
	printf("\nThese are pretty far, make sure to gear up~\n");
	j = 1;
	for(i = 0; i < m; i++){
		if(jarak[i] > 5 && jarak[i] <= 10){
			printf("%d. %s: %d hour(s) %d minute(s)\n", 
					j, misi[i].kata, menitTempuh[i]/60, menitTempuh[i]%60);
			j++;
		}
	}
	
	printf("\n========================================\n");
	printf("Coming from AIIG! Is a little message for you, Agent Apple:\n");
	waktuEnkripsi = 0;	// * setup waktu ke 0
	key = 0;			// *
	strip = 0;			// *
	// menghitung banyaknya konsonan dan lambang '_'
	for (i = 0; i < n; i++) {
		for (j = 0; j < strlen(pesan[i].kata); j++){
			c = pesan[i].kata[j];
			if((c >= 'A') && (c <= 'Z')){
				pesan[i].kata[j] += 32;	                           
			}
			if (c != 'a' && c != 'A' && c != 'i' && c != 'I' &&
				c != 'u' && c != 'U' && c != 'e' && c != 'E' &&
				c != 'o' && c != 'O' && c != '_') {
				key++;
			}
			if (c == '_'){
				strip++;
			}
		}
		// menghitung waktu yang dibutuhkan untuk mengenkripsi
		waktuEnkripsi += strlen(pesan[i].kata) * 2;
	}
	// mengurangi waktu untuk mengenkripsi '_' 
	waktuEnkripsi -= strip * 2;
	// mengenkripsi dan juga mengubah ke kapital
	for(i = 0; i < n; i++){
		for (j = 0; j < strlen(pesan[i].kata); j++){
			c = pesan[i].kata[j];
			if((c >= 'a') && (c <= 'z')){
				pesan[i].kata[j] = ((c - 'a' + key) % 26) + 'a';
			}
			if((j % 2 == 1) && (c != '_')){
				pesan[i].kata[j] -= 32;
			}
		}
	}
	// mengeluarkan output pesan yang terenkripsi
	for(i = 0; i <= n; i++){
		printf("%s\n", pesan[i].kata);
	}

	printf("========================================\n\n");
	// menghitung waktu set out.
	jam.set = (jam.sekarang + (waktuEnkripsi + menitJalan + menit.sekarang) / 60);
	menit.set = (menit.sekarang + waktuEnkripsi + menitJalan) % 60;
	//pengkondisian agar jam memiliki 2 digit di bagian jam dan menit
	if(jam.set < 10){
		if(menit.set < 10){
			printf("Setting out at 0%d:%0d\n", jam.set, menit.set);		
		}else{
			printf("Setting out at 0%d:%d\n", jam.set, menit.set);		
		}
	}else if(menit.set < 10){
		printf("Setting out at %d:0%d\n", jam.set, menit.set);			
	}else{
		printf("Setting out at %d:%d\n", jam.set, menit.set);
	}
	// menghitung waktu untuk kembali ke markas
	jam.jalan = jam.set + ((menit.set + waktuPerjalanan) / 60);
	menit.jalan = (menit.set + waktuPerjalanan) % 60;
	//pengkondisian agar jam memiliki 2 digit di bagian jam dan menit
	if(jam.jalan == 0){
		if(menit.jalan == 0){
			printf("Arriving to AIIG headquarters at 00:00\n", jam.jalan, menit.jalan);		
		}else if(menit.jalan < 10 && menit.jalan != 0){
			printf("Arriving to AIIG headquarters at 00:0%d\n", jam.jalan, menit.jalan);		
		}else{
			printf("Arriving to AIIG headquarters at 00:%d\n", jam.jalan, menit.jalan);		
		}
	}else if(jam.jalan < 10 && jam.jalan != 0){
		if(menit.jalan == 0){
			printf("Arriving to AIIG headquarters at 0%d:00\n", jam.jalan, menit.jalan);		
		}else if(menit.jalan < 10 && menit.jalan != 0){
			printf("Arriving to AIIG headquarters at 0%d:0%d\n", jam.jalan, menit.jalan);		
		}else{
			printf("Arriving to AIIG headquarters at 0%d:%d\n", jam.jalan, menit.jalan);		
		}
	}else{
		if(menit.jalan == 0){
			printf("Arriving to AIIG headquarters at %d:00\n", jam.jalan, menit.jalan);
		}else if(menit.jalan < 10 && menit.jalan != 0){
			printf("Arriving to AIIG headquarters at %d:0%d\n", jam.jalan, menit.jalan);
		}else{
			printf("Arriving to AIIG headquarters at %d:%d\n", jam.jalan, menit.jalan);
		}
	}
	printf("\n========================================\n\n");
	// pengkondisian untuk keadaan ketika sampai di jam berapa
	if(jam.jalan < 7){
		printf("Things are pretty calm~ Might as well catch up on sleep.. zzzzzzz\n");
	}else if(jam.jalan >= 7 && jam.jalan <= 18){
		printf("You shall not sleep! There is still a lot to do! GET UP RIGHT AWAY! Boss has something for you!\n");
	}else if(jam.jalan > 18){
		printf("Enjoy your restful evening sir! The bed is waiting for your presence!\n");
	}

	/*
	// test input output.
	for (i = 0; i < m; i++){
		printf("%s\n", misi[i].kata);
		printf("%d %d\n", jarak[i], menitTempuh[i]);
	}
	printf("%d\n", n);
	for(i = 0; i <= n; i++){
		printf("%s\n", pesan[i].kata);
	}
	printf("%d %d\n", jamSekarang, menitSekarang);
	printf("%d\n", waktuPerjalanan);	
	*/

	return 0;
}