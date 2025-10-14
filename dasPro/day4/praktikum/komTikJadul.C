#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int j = 1;
	char str[1029];
	char letter;

	i = 0;
	while (letter != '.' && i < 1028){
		scanf(" %c", &letter);
		str[i] = letter;
		i++;
	}
	
	str[i-1] = '\0';
	i = 0;
	printf("%d. ", j);
	while(i < strlen(str)){
		if(str[i] != ','){
			printf("%c", str[i]);
		}else{
			j++;
			printf("\n%d. ", j);
		}
	i++;
	}
	return 0;
}