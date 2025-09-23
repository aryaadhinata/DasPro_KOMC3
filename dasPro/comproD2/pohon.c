#include <stdio.h>

int main(){
	/*
		i, j & k hanyalah parameter untuk mengitung banyak pengulanagan.
		b & c representasi dari baris dan kolom.
		sim digunakan untuk mengeluarkan simbol(hiasan) yang akan digunakan di pohon. 
	*/
	int i, j, k, b, c;
	char sim;
	
	// meminta input user untuk banyak baris dan panjang dari phon serta hiasannya.
	scanf("%d %d %c", &c, &b, &sim);
	
	/*
		pengulanan pertama untuk membuat segitiga dari input baris dan kolom, tingi
		segitiganya adalah kolom dan dipisahkann menjadi dua bagian bagian kosong
		didepan yang di isi oleh spasi dengan bentuk segitiga menurun dengan perbedaan
		perbaris adalah n-1, sementara bagian kedua adalah segitiga dengan bentuk menaik
		perbedaan perbaris adalah 2n+1.
	*/
    for(i = 0; i < c/2+1 ; i++) {
        for(j = 0; j < c/2-i ; j++) {
            printf(" "); 
        }
        for(k = 0; k < 2*i+1; k++) {
            printf("*");
        }
    printf("\n");
	}
	
	/*
		Pengulangan kedua digunakan untuk memunculkan bentuk pohon dan juga hiasanya,
		dimana lebar pohon itu adalah sepertiga dari lebar bagian atas pohon yang paling
		bawah.
	*/
	for(i=0; i < b; i++){
		for(j = 0; j < (c+1)/3 ; j++){
			printf(" ");
		}			
		for(k = (c+1)/3; k < c*2/3 ; k++){
			printf("%c", sim);
		}
	printf("\n");
	}
	
	/*
		Pengulanga ketiga digunakan untuk membuat base tanah yang muncul dibawah batang
		pohon dan dengan lebar yang sama dengan bagian atas pohon yang paling bawah.
	*/
	for(i=0; i < c; i++){
		printf("=");
	}
	
	
	return 0;
}