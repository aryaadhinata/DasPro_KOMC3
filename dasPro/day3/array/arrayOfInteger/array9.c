#include <stdio.h>
#include <string.h>

int main(){
	int str[50];
	int n, i;
	for(n = 0; n <2; n++){
		scanf("%d", &str[n]);
	}
	
	int hasil = str[0];
	for(i = 1; i <= 2; i++){
		if(hasil < str[i]){
			if(str[i] % 2 != 0){
				hasil = str[i];
			}
		}
	}
	
	printf("%d\n", hasil);
	return 0;
}