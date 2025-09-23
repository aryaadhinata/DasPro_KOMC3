#include <stdio.h>

// pelajaran pertama tentang typdes dalam struckdat
typedef struct{
	int nim;
	int ipk;
} mhs;

int main(){
	mhs mhas1, mhas2;
	
	mhas1.nim = 2504992;
	mhas1.ipk = 3.92;
	
    printf("Data Mahasiswa:\n");
    printf("NIM     : %d\n", mhas1.nim);
    printf("IPK     : %d\n", mhas1.ipk);
	
	return 0;
}