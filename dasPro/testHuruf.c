#include <stdio.h>

int main(){
	/*
		deklarasi variabel char untuk karakter yang nantinya akan di inputkan dan
		int untuk penanda kebenaran statment.
	*/
	char ka, kb, kc;
	int x, y, z;
	x = 0, y = 0, z = 0;
	
	// meminta users untuk memasukan tiga karakter sesuai dengan syarat.
	printf("Masukan tiga karakter (dengan syarat urutan konsonan vokal konsonan):\n");
	scanf("%c %c %c", &ka, &kb, &kc);
	
	// memberi tanda jika yang di masukan oleh users sudah benar.
	if((ka != 'a') && (ka != 'i') && (ka != 'u') && (ka != 'e') && (ka != 'o')){
		x = 1;
	}
	if((kb == 'a') || (kb == 'i') || (kb == 'u') || (kb == 'e') || (kb == 'o')){
		y = 1;
	}
	if((kc != 'a') && (kc != 'i') && (kc != 'u') && (kc != 'e') && (kc != 'o')){
		z = 1;
	}	

	//cek terakhir untuk memberikan kesimpulan.
	if((x == 1) && (y == 1) && (z == 1)){
		printf("memenuhi syarat\n");
	}else{
		printf("tidak memenuhi syarat\n");
	}

	return 0;
}

/*
	membuat program yang mengecek urutan penulisan.
*/