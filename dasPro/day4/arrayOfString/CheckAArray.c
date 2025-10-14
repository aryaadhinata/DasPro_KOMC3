#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j, status;
	
	scanf("%d", &n);
	char arr[n][1029];
	for(i = 0;i < n; i++){
		scanf("%s", &arr[i]);
	}
	
	status = 1;
	i = 0;
	while((i < n) && (status == 1)){
		int ada = 0;
		j = 0;
		while(j < strlen(arr[i]) && (ada == 0)){
			if(arr[i][j] == 'a'){
				ada = 1;
			}else{
				j++;
			}
		}
		if(ada == 0){
			status = 0;
		}else{
			i++;
		}
	}
	
	if(status == 0){
		printf("tidak valid\n");
	}else{
		printf("valid\n");
	}
	
	return 0;
}