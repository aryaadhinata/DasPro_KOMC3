#include <stdio.h>
#include <string.h>

int main(){
	// alokasi panjang string 1 & 2.
	char str1[51], str2[51];
	
	// input string 1.
	scanf("%s", str1);
	
	// mengcopy string ke str2.
	strcpy(str2, "bintang pengen nasi padang");
	
	// menunjukan string sebelum di copy.
	printf("\nSebelum di copy\n");
	printf("String 1 : %s\n", str1);
	printf("String 2 : %s\n", str2);
	
	// mengcopy string 1 ke 2.
	strcpy(str2, str1);

	// menunjukan string setelah di copy.
	printf("\nSesudah di copy\n");
	printf("String 1 : %s\n", str1);
	printf("String 2 : %s\n", str2);
	return 0;
}