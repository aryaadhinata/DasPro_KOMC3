#include "Jason.h"

int main(){
	// deklarasi variabel
	char arr[513][513];
	int n = 0;
	
	do{ // meminta input sebelum mendapat input "END"
		scanf("%s", arr[n]);
		n++;	
	}while(strcmp(arr[n - 1], "END") != 0);
	
	n--;
	
	// keluaraan yang di hasilkan
	for(int j = 0; j < n; j++){
		printf("Hasil untuk string \"%s\": \n", arr[j]);
		ASCII(arr, j); // mengakases prosedur di mesin.c
		printf("---\n");
	}
	
	return 0;
}