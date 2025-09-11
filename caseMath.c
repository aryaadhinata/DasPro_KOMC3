#include <stdio.h>
#include <math.h> // library baru untuk syntax matematika

int main(){			//====================
	int a;			//=dekalrasi variabel=
	float nAkar;	//====================
	
	printf("masukan nilai yang akan di cari kuadrat dan akarnya:\n");
	scanf("%d", &a); //menerima input dari user yang nantinya akan dipake
	
	nAkar = sqrt(a); //proses mencari akar dari bilangan yang di input(sqrt fungsi matematika)
	a = a*a; //proses mencari pangkat dengan mengalikan input user --
	
	printf("%d adalah nilai kuadrat\n", a );	//output nilai kuadrat
	printf("%0.4f adalah nilai akar\n", nAkar);	//output nilai akar kuadrat
	return 0;
}

/*
Membuat algoritma untuk menampilkan akar kuadrat dan hasil
kuadrat dari sebuah bilangan integer
*/