#include "jarakTengahTerpanjang.h"

void titikJauhTengah(int x1, int y1, int x2, int y2, int x3, int y3){
	// deklarasi variabel yang akan digunakan di prosedur
	float satu, dua, tiga, max, xt, yt;
	
	// menghitung jarak titik
	satu = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    dua = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    tiga = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

	// membandingkan jarak titik terjauh dan mencari titk tengahnya
	if(satu > dua && satu > tiga){
		max = satu;
		xt = (x1 + x2) / 2.0;
		yt = (y1 + y2) / 2.0;
	}else if(dua > satu && dua > tiga){
		max = dua;
		xt = (x1 + x3) / 2.0;
		yt = (y1 + y3) / 2.0;
	}else if(tiga > satu && tiga > dua){
		max = tiga;
		xt = (x3 + x2) / 2.0;
		yt = (y3 + y2) / 2.0;
	}else{
		printf("ada titik yang mempunyai panjang sama\n");
	}
	
	printf("Jarak terjauh adalah %0.2f\n", max);
	printf("Titik tengah harta karun adalah (%0.2f, %0.2f)\n", xt, yt);
}