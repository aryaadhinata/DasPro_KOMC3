#include <stdio.h>
#include <string.h>

int main(){
	int n,i, j;
	scanf("%d", &n);
	char arr[n][50];
	for(i = 0;i < n; i++){
		scanf("%s", &arr[i]);
	}
	
	for(i = 0; i < n ;i++){
		for(j=0;j<strlen(arr[i]);j++){
			printf("%c\n", arr[i][j]);
		}
	}
	
	return 0;
}