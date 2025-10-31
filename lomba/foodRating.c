#include <stdio.h>
#include <string.h>

int main(){
	char poli[200001];
	scanf("%s", poli);
	
	char compare[strlen(poli)];
	strcpy(compare, poli);
	int sumIdx[200001] = {0};
	for(int i = 0; i < strlen(poli); i++){
		for(int j = (i+1); j < strlen(poli); j++){
			if(compare[i] == poli[j]){
				sumIdx[i]++;
			}
		}
	}
	
	for (int i = 0; i < strlen(poli); i++) {
        printf("sumIdx[%d] = %d\n", i, sumIdx[i]);
    }
	return 0;
}