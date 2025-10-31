/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan UTS dalam mata kuliah
	dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

#include "panenBibit.h"

int main(){
	int n; // banyak n tanaman
	scanf("%d", &n);
	
	// loop untuk input modal bibit dan waktu pemeliharaan dalam bulan
	int modal[n], pelihara[n];
	char bibit[n][129];
	for(int i = 0; i < n; i++){
		scanf("%d %s %d", &modal[i], bibit[i], &pelihara[i]);
	}
	
	int panen;
	scanf("%d", &panen);
	
	int minHarga;
	scanf("%d", &minHarga);
	
	int maxData;
	scanf("%d", &maxData);
	
	printf("yang memenuhi:\n");
	int count = 0;
	// mengecek apakah sesuai syarat atau tidal
	for(int i = 0; i < n; i++){
		while((pelihara[i] == panen) && (minHarga <= modal[i]) && (count < maxData)){
			cek(i, bibit);
			i++;
			count++;
		}	
	}
	
	return 0;
}