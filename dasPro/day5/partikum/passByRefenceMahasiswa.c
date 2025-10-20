#include <stdio.h>

typedef struct{ // bungkusan untuk mahasiswa
	char nama[129];
	char nim[11];
}mahasiswa;

void scanMahasiswa(mahasiswa *mhs){ // prosedur untuk scanf.
	scanf("%s %s", (*mhs).nama, (*mhs).nim);
}

int main(){
	mahasiswa mhs_ilkom;
	
	scanMahasiswa(&mhs_ilkom);
	
	printf("Nama: %s, NIM: %s\n", mhs_ilkom.nama, mhs_ilkom.nim);
	
	return 0;
}