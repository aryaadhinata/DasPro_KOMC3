#include <stdio.h>

int main(){
	int tabint[5];
	int penghitung;
	for(penghitung = 0; penghitung < 5; penghitung++){
		tabint[penghitung] = penghitung;
	}
	for(penghitung = 0; penghitung < 5; penghitung++){
		printf("%d", tabint[penghitung]);
	}
	return 0;
}