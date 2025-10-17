#include <stdio.h>
#include <string.h>

// untuk buat array kata jadi kalimat.
typedef struct{
	char kata[50];
}string;

int main(){
	// deklarasi variabel
	int n,
	i, j;
	// input
	scanf("%d", &n);
	string arr[n];
	
	// input buat kalimat arr
	for(i=0;i<n;i++){
		scanf("%s", &arr[i].kata);
	}

	// print buat perkata
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i].kata);j++){
			printf("%c\n", arr[i].kata[j]);
		}
	}
	
	return 0;
}