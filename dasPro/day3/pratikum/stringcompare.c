#include <stdio.h>
#include <string.h>

int main(){
	// alokasi panjang array 1 & 2.
	char str1[51], str2[51];
	
	// input string 1 dan 2.
	scanf("%s", str1);
	scanf("%s", str2);
	
	// pengkondisian untuk mengecek ke identitekan string.
	if(strcmp(str1, str2) == 0){
		printf("String %s dan string %s identik\n", str1, str2);
	}	
	else if(strcmp(str1, str2) > 0){
		printf("String %s memiliki nilai ASCII lebih besar dibanding %s\n", str1, str2);
	}	
	else if(strcmp(str1, str2) < 0){
		printf("String %s memiliki nilai ASCII lebih kecil dibanding %s\n", str1, str2);
	}
	return 0;
}