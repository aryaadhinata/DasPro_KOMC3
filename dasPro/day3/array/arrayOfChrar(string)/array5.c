#include <stdio.h>
#include <string.h>

int main(){
	char str1[50];
	char str2[50];
	char str3[50];
	
	scanf("%s", &str1);
	scanf("%s", &str2);
	scanf("%s", &str3);
	
	int i;
	
	int count1 = 0, count2 = 0, count3 = 0;
	
	for(i = 0; i < (strlen(str1)-1); i++){
		if(str1[i] == 'k' && str1[i++] == 'a'){
			count1++;
		}
	}
	
	for(i = 0; i < (strlen(str2)-1); i++){
		if(str2[i] == 'k' && str2[i++] == 'a'){
			count2++;
		}
	}
	
	for(i = 0; i < (strlen(str3)-1); i++){
		if(str3[i] == 'k' && str3[i++] == 'a'){
			count3++;
		}
	}
	
	printf("untuk kata %s ada %d kata ka\n", str1, count1);
	printf("untuk kata %s ada %d kata ka\n", str2, count2);
	printf("untuk kata %s ada %d kata ka\n", str3, count3);
	return 0;
}