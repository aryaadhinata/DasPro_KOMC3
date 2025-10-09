#include <stdio.h>

/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan kuis dalam 
	mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

typedef struct{
	float pertama;
	int first, last;
}angka;

int main(){
	// deklarasi variabel yang akan digunakan dalam tipe float
	angka satu, dua, tiga;
	
	// meminta input 
    scanf("%f %f %f", &satu.pertama, &dua.pertama, &tiga.pertama);
	
	// pemisahan angka pertama
	satu.first = satu.pertama*10000/ 10000;
	satu.last = ((satu.pertama*10000) - (satu.first*10000))/100;
	
	//keluarannya
    printf("float: %0.2f\n", satu.pertama);
    printf("depan : %d\n", satu.first);
    printf("belakang: %d\n", satu.last);
    printf("bagi : %d\n", (satu.first/satu.last) );	
	
	printf("\n");
	
	// pemisahan angka kedua
	dua.first = dua.pertama*10000/ 10000;
	dua.last = ((dua.pertama*10000) - (dua.first*10000))/100;
	
	// keluaranya
    printf("float: %0.2f\n", dua.pertama);
    printf("depan : %d\n", dua.first);
    printf("belakang: %d\n", dua.last);
    printf("bagi : %d\n", (dua.first/dua.last) );	
	
	printf("\n");
	
	// pemisahan angka ketiga
	tiga.first = tiga.pertama*10000/ 10000;
	tiga.last = ((tiga.pertama*10000) - (tiga.first*10000))/100;
	
	// keluaranya
    printf("float: %0.2f\n", tiga.pertama);
    printf("depan : %d\n", tiga.first);
    printf("belakang: %d\n", tiga.last);
    printf("bagi : %d\n", (tiga.first/tiga.last) );
	
	printf("\n");
	
	// mengkondisikan mena angka yang depan di bagi belakangnya yang paling besar.
	if((satu.first/satu.last) > (dua.first/dua.last)){
		if((satu.first/satu.last) > (tiga.first/tiga.last)){
			printf("nilai bagi terbesar: %d\n", (satu.first/satu.last));
		} else {
			printf("nilai bagi terbesar: %d\n", (tiga.first/tiga.last));
		}
	}else {
		if((dua.first/dua.last) > (tiga.first/tiga.last)){
			printf("nilai bagi terbesar: %d\n", (dua.first/dua.last));
		} else {
			printf("nilai bagi terbesar: %d\n", (tiga.first/tiga.last));
		}
	}
	
	return 0;
}