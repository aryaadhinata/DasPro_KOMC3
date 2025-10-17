#include <stdio.h>

void tulis(int n){ // fungsi tulis yang akan merekursifkan
	int counter;
	counter = n;
	if(counter > 0){
		printf("proses rekursif dengan nilai counter: %d\n", counter);
		counter = counter - 1;
		tulis(counter);
	}
}
	
int main(){ // main fungsi
	tulis(10);
	return 0;
}