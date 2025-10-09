#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &tabInt[i]);
	}
	
	int minimal = tabInt[0];
	for(i = 1; i < n; i++){
		if(minimal > tabInt[i]){	
			minimal = tabInt[i];
		}
	}
	
	printf("nilai minimal: %d\n", minimal);
	return 0;
}

// mencari nilai minimal dari array.