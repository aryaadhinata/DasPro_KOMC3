#include<stdio.h>
#include<string.h>

int main(){
	// bagian deklarasi variabel.
    int n, i, j, k;
    scanf("%d", &n);
    char kata[n][51];
	i = 0;
	k = 0;
	
	/*
		pengulangan untuk meminta input dan mengubahnya ke kapital
		serta mengidentifikasi panjang array terpanjang.
	*/ 
    while(i<n) {
        scanf("%s", kata[i]);
        j = 0;
        while(j < strlen(kata[i])) {
            if((kata[i][j] >= 'a') && (kata[i][j] <= 'z')) {
                kata[i][j] -= 32;
                j++;
            } else{
                j++;
            }
            if( k < strlen(kata[i])) {
                k = strlen(kata[i]);
            }
        }
        i++;
    }
	
	// diratakan dan di spasikan.
    i = 0;
    while(i < n) {
        j = 0;
        while(j < (k - strlen(kata[i])+i)) {
            printf(" ");
            j++;
        }
        printf("%s\n", kata[i]);
        i++;
    }
    return 0;
}