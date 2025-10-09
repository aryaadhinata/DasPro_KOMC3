#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	int i;
	
	printf("%s\n", str);
	
	for(i = 0; i < strlen(str); i++){
		printf("%c\n", str[i]);
	}
	
	return 0;
}
// %s untuk ngeprint string
// strlen(str) - menghitung banyaknya karakter pada string str
// !!!cari karakter white space.!!!
/*
	printf("Halo\tDunia\n");      // \t = tab, \n = baris baru
    printf("Coba\vTes\n");        // \v = vertical tab
    printf("Form\fFeed\n");       // \f = form feed
    printf("Carriage\rReturn\n"); // \r = carriage return
*/