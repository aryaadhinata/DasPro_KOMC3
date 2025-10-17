#include <stdio.h>

int main(){
	int A[2][3] = {{2, 3, 0}, {-1, 4, 2}},
		B[3][2] = {{4, 1}, {3, 4}, {2, -5}},
		BT[2][3],
		C[2][3],
		D[2][2] = {{2, 5}, {1, 4}},
		detD,
		BD[3][2],
		E[3][3] = {{1, 2, -1}, {3, 0, 2}, {-2, 5, 1}},
		detE;
		
	printf("Hasil penjumlahan 2A + B^T :\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			A[i][j] *= 2;
			BT[i][j] = B[j][i];
			C[i][j] = A[i][j] + BT[i][j];
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Hasil perkalian BD :\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			BD[i][j] = 0;
			for(int k = 0; k < 2; k++){
				BD[i][j] += B[i][k] * D[k][j];
			}
			printf("%d ", BD[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	detD = D[0][0] * D[1][1] - D[0][1] * D[1][0];
	printf("Determinan D = %d\n", detD);
	
	printf("\n");

	detE = E[0][0] * (E[1][1]*E[2][2] - E[1][2]*E[2][1]) - 
			E[0][1] * (E[1][0]*E[2][2] - E[1][2]*E[2][0]) + 
			E[0][2] * (E[1][0]*E[2][1] - E[1][1]*E[2][0]);
	printf("Determinan E = %d\n", detE);
	
	printf("\n");
	
	return 0;
}