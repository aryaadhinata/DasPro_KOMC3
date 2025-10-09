#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j, count;
	scanf("%d", &n);
	char arr[n][50];
	for(i = 0;i < n; i++){
		scanf("%s", &arr[i]);
	}
	
	count = 0;
	for(i = 0; i < n ;i++){
		for(j=0;j<strlen(arr[i]);j++){
			if((arr[i][j]) == 'a'){
				count++;
			}
		}
	}
	
	printf("%d", count);
	return 0;
}