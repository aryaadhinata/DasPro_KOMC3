#include <stdio.h>

typedef struct{
int x;
int y;
}titik;

int main(){
	int n, i, jx = 0, jy = 0;
	scanf("%d", &n);
	titik ikatan_titik[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &ikatan_titik[i].x);
		scanf("%d", &ikatan_titik[i].y);
	}
	
	for(i=0;i<n;i++){
		jx = jx + ikatan_titik[i].x;
		jy = jy + ikatan_titik[i].y;
	}
	printf("%d %d\n", jx, jy);

return 0;
}