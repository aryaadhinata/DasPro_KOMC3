#include <stdio.h>

int main(){
	/*
	deklarasi variabel yang akan digunakan. 
	* 	hutang untuk hutang,
	* 	deadl untuk batas waktu pembayaran, 
	* 	total untuk total uang yang dikumpulkan dalam satu hari, 
	*	alltotal untuk total uang yang dikumpulkan selama 
		sebelum batas waktu pembayaran,
	*	shi, hos, non, aya dan sen adalah variabel untuk orang orang
		yang mengumpulkan uang untuk hutang.
	*/
	int hutang, deadl, shi, hos, non,
	aya, sen, total, alltotal; 
	
	// menanyakan hutang dan deadline kepada users.
	printf("berapa hutang dan berapa lama deadline pembayarannya:\n");
	scanf("%d %d", &hutang, &deadl);
	
	// menanyakan uang dari Shiroko, Hoshino, Nonomi, Ayane dan sensei.
	printf("masukan uang Shiroko, Hoshino, Nonomi, Ayane dan sensei:\n");
	scanf("%d %d %d %d %d", &shi, &hos, &non, &aya, &sen);
	
	// menghitung total uang yang dikumpulkan dalam satu hari.
	total = shi + hos + non + aya + sen;
	
	// mengeluarkan nilai masing masing variabel untuk mengecek kebenarannya.
	printf("hasil selama satu hari\n");
	printf("Shiroko : Rp %d\n", shi);
	printf("Hoshino : Rp %d\n", hos);
	printf("Nonomi : Rp %d\n", non);
	printf("Ayane : Rp %d\n", aya);
	printf("Sensei : Rp %d\n", sen);
	printf("Total : Rp %d\n", total);
	
	/* 
		menhitung total uang yang dikumpulkan selama kurun waktu
		yang sudah di input.
	*/
	alltotal = total * deadl;
	
	// mengeluarkan hasil yang didapat selama kurun waktu itu.
	printf("Total selama %d hari: Rp. %d", deadl, alltotal);
	
	// kondisi kemungkinan hutang lunas atau tidak.
	if(alltotal >= hutang){
		printf("Hore! Abydos bebas dari hutang :D\n");
	}
	else{
		printf("Tidak! Abydos digusur oleh Kaiser D:\n");
	}
	
	return 0;
}

/*
	Program untuk mengecek pembayaran hutang yang di lakukan oleh 5 orang.
*/