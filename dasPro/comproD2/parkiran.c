#include <stdio.h>

// sifat yang ikut ke parkir.
typedef struct{
	int tarif, kaps, jumlah, diskon;
	float total;
}parkir;

int main(){
	// deklarasi variable utama.
	float all;
	char hari;
	parkir motor, mobil, truk;
	
	// meminta input user.
	scanf("%d %d %d", &motor.tarif, &motor.kaps, &motor.diskon);
	scanf("%d %d %d", &mobil.tarif, &mobil.kaps, &mobil.diskon);
	scanf("%d %d %d", &truk.tarif, &truk.kaps, &truk.diskon);
	scanf("%d %d %d", &motor.jumlah, &mobil.jumlah, &truk.jumlah);
	scanf(" %c", &hari);
	
	// pengkondisian keadaan motor dengan kapasitas parkiran dan juga diskon.
	if(motor.kaps < motor.jumlah){
		motor.jumlah = motor.kaps;
		motor.total = motor.jumlah * motor.tarif * (1 - motor.diskon/100.0);
	}
	else{
		motor.total = motor.jumlah * motor.tarif * (1 - motor.diskon/100.0);
	}
	
	// pengkondisian keadaan mobil dengan kapasitas parkiran dan juga diskon.
	if(mobil.kaps < mobil.jumlah){
		mobil.jumlah = mobil.kaps;
		mobil.total = mobil.jumlah * mobil.tarif * (1 - mobil.diskon/100.0);
	}
	else{
		mobil.total = mobil.jumlah * mobil.tarif * (1 - mobil.diskon/100.0);
	}
	
	// pengkondisian keadaan truk dengan kapasitas parkiran dan juga diskon.
	if(truk.kaps < truk.jumlah){
		truk.jumlah = truk.kaps;
		truk.total = truk.jumlah * truk.tarif * (1 - truk.diskon/100.0);
	}
	else{
		truk.total = truk.jumlah * truk.tarif * (1 - truk.diskon/100.0);
	}	
	
	// case yang akan muncul dari hari
	switch(hari){
		case 'L':{
			motor.total += motor.total * 0.1;
			mobil.total += mobil.total * 0.1;
			truk.total += truk.total * 0.1;
			break;
		}
		case 'N':{
			motor.total += motor.total * 0.2;
			mobil.total += mobil.total * 0.2;
			truk.total += truk.total * 0.2;
			break;
		}
		default:{
			break;
		}
	}
	
	// menghitung total yang didapatkan petugas parkir.
	all = motor.total + mobil.total + truk.total;
	
	// mengeluarkan nilai nilai yang di inginkan.
	printf("Rekap parkiran wumbo hari ini:\n");
	printf("%d motor\n", motor.jumlah);
	printf("%d mobil\n", mobil.jumlah);
	printf("%d truk\n", truk.jumlah);
	printf("Wumbo harus menyetor sebesar Rp.%0.0f", all);
	
	return 0;
}