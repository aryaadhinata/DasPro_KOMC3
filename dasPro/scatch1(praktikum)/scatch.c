#include <stdio.h>

int main(){
	int number;
	int n;
	char huruf;
	double bilangan;
	
	int x, y;
	
	number = 11; 
	n = 13; 
	huruf = 'P';
	bilangan = 1.16;
	
/* 
==================== num =====================
== cara cepat untuk a = a (+, -, /, *, %) b ==
==============================================
*/

	number += n; 
	printf("%d\n", number);
	number -= n; 
	printf("%d\n", number);
	number *= n; 
	printf("%d\n", number);
	number /= n; 
	printf("%d\n", number);
	number %= n; 
	printf("%d\n", number);
	
	return 0;
}