#include <stdio.h>

int main(){
	/*
		deklarasi variabel:
		panli = panjang lintasan,
		spd = speed,
		stm = stamina,
		pwr = power,
		gts = guts,
		wts = wits
		totatr = total atribut,
		ovrll = overall,
		perpre = prediksi performa,
		medan = jenis medan (T/t)/(D/d) 
		catattan : printf("======================================\n") hanya 
		untuk membantu misahin bagian code biar lebih readable
	*/
	int panlin, spd, stm, pwr, gts, wts, totatr;
	float ovrll, perpre;
	char medan;
	
	printf("======================================\n");
	
	// meminta masukan panjang lintasan dan jenis medan lalu menyimpannya di variabel
	// yang sesuai.
	printf("Masukan panjang lintasan dan juga jenis medan:\n");
	scanf("%d %c", &panlin, &medan);
	
	printf("======================================\n");
	
	// meminta masukan atribut speed, stamina, power, guts dan wits lalu menyimpannya
	// di variabel yang sesuai.
	printf("Masukan atribut speed, stamina, power, guts dan wits secara berturut-turut:\n");
	scanf("%d %d %d %d %d", &spd, &stm, &pwr, &gts, &wts);
	
	printf("======================================\n");
	
	// menghitung jumlah atribut.
	totatr = spd + stm + pwr + gts + wts;
	
	// keluaran untuk menunjukan panjang lintasan.
	printf("Panjang lintasan: %dM\n", panlin);
	
	// pengkondisian untuk menentukan keluaran untuk jenis medan.
	if((medan == 'D') || (medan == 'd')){
		ovrll = totatr * 2;
		printf("Tipe lintasan: Dirt\n");
	} 
	else if((medan == 'T') || (medan == 't')){
		ovrll = totatr * 0.5;
		printf("Tipe lintasan: Turf\n");
	}
	else{
		printf("Masukan tipe lintasan 'D' untuk dirt dan 'T' untuk turf!\n");
	}
	
	// keluaran yang menunjukan total atribut setelah di kali jenis medan, dan menghitung
	// prediksi perfoma yang didapatkan.
	printf("Total atribut: %0.2f\n", ovrll);
	perpre = ovrll / panlin;
	
	// pengkondisian dari prediksi performa untuk menuntukan kebaerhasilan Haru Urara. 
	if(perpre >= 1){
		perpre = 100.00;
		printf("Prediksi performa:%0.2f%%\n", perpre);
		printf("Cintaku Haru Urara PASTI MENANG!\n");
	}else if((perpre >= 0.8) && (perpre < 1)){
		perpre = perpre * 100;
		printf("Prediksi performa:%0.2f%%\n", perpre);
		printf("Cintaku Haru Urara PASTI MENANG!\n");
	}else if((perpre > 0.3) && (perpre < 0.8)){
		perpre = perpre * 100;
		printf("Prediksi performa:%0.2f%%\n", perpre);
		printf("Mari kita berdoa agar Haru Urara jaya!\n");
	}else if((perpre >= 0) && (perpre <= 0.3)){
		perpre = perpre * 100;
		printf("Prediksi performa:%0.2f%%\n", perpre);
		printf("Yaah, Haru Urara gagal!\n Tapi Haru Urara tak akan menyerah!!\n");
	}else{
		perpre = 0;
		printf("Prediksi performa:%0.2f%%\n", perpre);
		printf("Yaah, Haru Urara gagal!\nTapi Haru Urara tak akan menyerah!!\n");
	}
	printf("======================================\n");
	
	return 0;
}

/*
	Program menghitung kemungkinan keberhasilan seorang peserta lomba.
*/