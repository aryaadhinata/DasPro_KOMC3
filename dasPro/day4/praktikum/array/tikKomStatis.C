#include <stdio.h>
#include <string.h>

int main(){
	char str[1029];
	char letter;
	
	int i = 0;
	while (letter != '.' && i < 1028){
		printf("Masukan karakter: ");
		scanf(" %c", &letter);
		str[i] = letter;
		i++;
	}
	str[i-1] = '\0';
	
	printf("Kata yang dimasukan: %s\n", str);
	return 0;
}