#include <stdio.h>
#include <string.h>

/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan tes pemrogaraman
	dalam mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

int main(){
	//===========~deklarasi~===============
	/*
		pendeklarasian variabel n untuk banyak misi, c1 dan c2 untuk
		menghitung banyak keberhasilan misi dan digunakan sebagai perbandingan
		di akhir. str 11 untuk menyimpan nama, 12 untuk organisasi assasin pertama
		str 21 untuk menyimpan nama, 22 untuk organisasi kedua. strBbs untuk 
		organisasi bebas. strDnd untuk denda yang akan terjadi. misi1 menyimpan
		hasil misi oleh assasin1, misi2 menyimpan hasil misi oleh assasin2. 
		len1 untuk menyimpan panjang nama assasin1 len2 untuk menyimpan panjang 
		nama assasin2.
	*/
	int n, c1, c2;
	scanf("%d", &n);
	char str11[1029], str12[1029], str21[1029], 
		 str22[1029], strBbs[1029], strDnd[1029];
	int misi1[1029], misi2[1029], len1, len2;
	
	//==============~input~================
	scanf("%s", str11);
	scanf("%s", str21);
	for(int i = 0; i < n; i++){
		scanf("%d", &misi1[i]);
	}

	scanf("%s", str12);
	scanf("%s", str22);
	for(int i = 0; i < n; i++){
		scanf("%d", &misi2[i]);
	}
	scanf("%s", strBbs);
	
	//============~proses~===============
	c1 = 0; //set kedua jadi 0 untuk penanda.
	c2 = 0;
	for(int i = 0; i < n; i++){ // menjumlahkan poin assasin.
		c1 += misi1[i];
		c2 += misi2[i];
	}
	
	if(c1 == c2){ //poin misi sama jadi hitung banyak kesempurnaan
		for(int i = 0; i < n; i++){ //jika ada misi yang sempurna
			if(misi1[i] == 100){
				c1++;
			} else if(misi2[i] == 100){
				c2++;
			}
		}
	}
	
	if(c2 == c1){ //poin masih sama jadi ditambahkan misi indeks genap
		for(int i = 0; i < n; i+=2){ //tambah misi indeks genap
			c1 += misi1[i];
			c2 += misi2[i];
		}
	}
	
	len1 = (strlen(str11));	//panjang nama assasin1
	for (int i = 0; i < len1 / 2; i++) { //membalik nama setengah loop agar tidak kembali seperti semula.
		char temp = str11[i];
		str11[i] = str11[len1 - i - 1];
		str11[len1 - i - 1] = temp;
	}

    for (int i = 0; i + 1 < len1; i += 2) { // menukar nilai indeks.
        char temp = str11[i];
        str11[i] = str11[i + 1];
        str11[i + 1] = temp;
    }

    for (int i = 0; i < len1; i++) { // mengubah kapital atau tidak.
        if (i % 2 == 0) {
            if (str11[i] >= 'a' && str11[i] <= 'z')
                str11[i] -= 32;
        } else {
            if (str11[i] >= 'A' && str11[i] <= 'Z')
                str11[i] += 32;
        }
    }

	
	len2 = (strlen(str12));	// panjang nama assasin2.
	for (int i = 0; i < len2 / 2; i++) {  //membalik nama setengah loop agar tidak kembali seperti semula.
		char temp = str12[i];
		str12[i] = str12[len2 - i - 1];
		str12[len2 - i - 1] = temp;
	}

    for (int i = 0; i + 1 < len2; i += 2) { // menukar nilai indeks.
        char temp = str12[i];
        str12[i] = str12[i + 1];
        str12[i + 1] = temp;
    }

    for (int i = 0; i < len2; i++) { // mengubah kapital atau tidak.
        if (i % 2 == 0) {
            if (str12[i] >= 'a' && str12[i] <= 'z')
                str12[i] -= 32;
        } else {
            if (str12[i] >= 'A' && str12[i] <= 'Z')
                str12[i] += 32;
        }
    }
	
	// pengkondisian denda yang akan didapat
	if (c1 > c2) {
		if (strcmp(str21, strBbs) > 0) {
			strcpy(strDnd, "kena denda $75,000!");
		} else if (strcmp(str21, strBbs) < 0) {
			strcpy(strDnd, "kena denda $150,000!");
		} else {
			strcpy(strDnd, "bebas dari denda!");
		}
	} else if (c1 < c2) {
		if (strcmp(str22, strBbs) > 0) {
			strcpy(strDnd, "kena denda $75,000!");
		} else if (strcmp(str22, strBbs) < 0) {
			strcpy(strDnd, "kena denda $150,000!");
		} else {
			strcpy(strDnd, "bebas dari denda!");
		}
	}
	
	
	//==================~output~=================
	printf("The High Table declares!!! ");
	if(c1 > c2){
		printf("%s as the Assassin Tertinggi!!!\n", str11);
		printf("%s %s\n", str11, strDnd);
	}else if(c1 < c2){
		printf("%s as the Assassin Tertinggi!!!\n", str12);
		printf("%s %s\n", str12, strDnd);
	}
	return 0;
}