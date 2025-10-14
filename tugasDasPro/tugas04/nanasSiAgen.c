#include <stdio.h>
#include <string.h>

typedef struct{
	char kata[1029];
}string;


int main(){
	//========================= deklarasi =============================
	int i, m, n, jamSekarang, menitSekarang, waktuPerjalanan,
		jarak[1029], menitTempuh[1029];
	string misi[1029], pesan[1029];
	
	//=========================== input ===============================
	m = 0;
	scanf("%s", misi[m].kata);
	while(strcmp(misi[m].kata, "done") != 0){
		scanf("%s", misi[m].kata);
		scanf("%d", &jarak[m]);
		scanf("%d", &menitTempuh[m]);
		m++;
		scanf("%s", misi[m].kata);
	}

	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s", pesan[i].kata);
	}
	
	scanf("%d %d", &jamSekarang, &menitSekarang);
	scanf("%d", &waktuPerjalanan);
	
	for (i = 0; i < m; i++){
		printf("%s %d %d\n", misi[i].kata, jarak[i], menitTempuh[i]);
	}
	printf("%d\n", n);
	for(i = 0; i <= n; i++){
		printf("%s\n", pesan[i].kata);
	}
	printf("%d %d\n", jamSekarang, menitSekarang);
	printf("%d\n", waktuPerjalanan);	

	
	return 0;
}