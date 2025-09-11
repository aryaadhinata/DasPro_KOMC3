#include <stdio.h>
#include <math.h> // library untuk fuction matematikan di C

int main(){
	/*
		deklarasi variable titik (x, y) dan variabel lain yang membantu mempermudah
		dalam pemanggilan.
	*/
	int x1,y1, x2, y2, 
		m, n;
	float hasil;
	
	//meminta masukan user untuk titik titik yang akan dihitung jaraknya.
	printf("Masukan titik pertama:\n");
	scanf("%d %d", &x1, &y1);
	printf("Masukan titik kedua:\n");
	scanf("%d %d", &x2, &y2);
	
	//memproses titik yang sudah di input sebelumnya untuk di cari jaraknya.
	m =(x1 - x2) * (x1 - x2);
	n = (y1 - y2) * (y1 - y2);
	hasil = sqrt(m + n);
	
	//output yang akan di tampilkan.
	printf("Jarak antara kedua titik adalah %0.3f\n", hasil);
	return 0;
}

/*
	Program menghitung jarak dua titik
*/