#include <stdio.h>

int main(){
	// deklarasi variable yang nanti akan diisi oleh users.
	int a, b, c;
	
	// meminta users untuk mengisi
	printf("Masukan tiga bilangan bulat berbeda:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	/*
		melakukan pengkondisian agar bisa mendapatkan nilai yang terurut 
		dari besar ke kecil.
	*/
	if(a > b){
		if(b > c){
			printf("%d %d %d", a, b, c);
		}
		else if(b > c){
			printf("%d %d %d", a, c, b);
		}
	}else if(b > c){
		if(a > c){
			printf("%d %d %d", b, a, c);
		}
		else if(c > a){
			printf("%d %d %d", b, c, a);
		}
	}else if(c > a){
		if(b > a){
			printf("%d %d %d", c, b, a);
		}
		else if(a > b){
			printf("%d %d %d", c, a, b);
		}
	}
	
	return 0;
}

/*
	membuat program yang bisa mengurutkan tiga angka dari user dari yang terbesar
	ke yang terkecil.
*/