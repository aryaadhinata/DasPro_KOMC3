#include <stdio.h>
#include <string.h>

int main(){
	// mengalokasikan panjang string.
	char str[50];
	// meminta input.
	scanf("%s", &str);
	
	//looping dan pengkondisian untuk mensensor
	for(int i = (strlen(str)-1); i > 0; i--){
		if( (str[i] == 'a') || (str[i] == 'i') || (str[i] == 'u') || (str[i] == 'e') || (str[i] == 'o') || 
			(str[i] == 'A') || (str[i] == 'I') || (str[i] == 'U') || (str[i] == 'E') || (str[i] == 'O') ||
			(str[i] == '0') || (str[i] == '1') || (str[i] == '2') || (str[i] == '3') || (str[i] == '4') ||
			(str[i] == '5') || (str[i] == '6') || (str[i] == '7') || (str[i] == '8') || (str[i] == '9')){
			printf("%c", str[i]);
		}
		else{
			printf("*");
		}
	}
	
	return 0;
}