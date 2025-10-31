/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan UTS dalam mata kuliah
	dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

#include "danaDarurat.h"

int main(){
	int n;
	scanf("%d", &n);//n baris data
	
	int dana[n];
	char nama[n][513], kota[n][513];
	for(int i = 0; i < n; i++){ // loop untuk input data
		scanf("%s %d %s", nama[i], &dana[i], kota[i]);
	}
	
	int umr;
	scanf("%d", &umr); //nilai umr
	
	int i;
	// looping untuk mengecek kebenaran kondisi
	for(i = 0; i < n; i++){
		if((umr*6) <= dana[i]){
			punyaDana(i, nama, kota, dana); //prosedur untuk yang punya dana darurat
		}else{
			tidakPunyaDana(i, nama, kota, dana); //prosedur untuk yang tidak punya dana darurat
		}
	}
	return 0;
}