#include <stdio.h>

int main(){
	int A[5][5], B[5][5], AT[5][5], AB[5][5];
	int barisA, kolomA, barisB, kolomB;
	int i, j, k, sama = 1, detA = 0;

	printf("Masukkan ordo matriks A (baris kolom): ");
	scanf("%d %d", &barisA, &kolomA);
	printf("Masukkan elemen matriks A:\n");
	for(i = 0; i < barisA; i++)
		for(j = 0; j < kolomA; j++)
			scanf("%d", &A[i][j]);

	printf("Masukkan ordo matriks B (baris kolom): ");
	scanf("%d %d", &barisB, &kolomB);
	printf("Masukkan elemen matriks B:\n");
	for(i = 0; i < barisB; i++)
		for(j = 0; j < kolomB; j++)
			scanf("%d", &B[i][j]);

	if(barisA == barisB && kolomA == kolomB){
		for(i = 0; i < barisA; i++)
			for(j = 0; j < kolomA; j++)
				if(A[i][j] != B[i][j]) sama = 0;
		if(sama) printf("Matriks A dan B sama\n");
		else printf("Matriks A dan B tidak sama\n");
	}else printf("Matriks A dan B tidak sama (ordo berbeda)\n");

	if(barisA == barisB && kolomA == kolomB){
		printf("\nHasil A + B:\n");
		for(i = 0; i < barisA; i++){
			for(j = 0; j < kolomA; j++)
				printf("%d ", A[i][j] + B[i][j]);
			printf("\n");
		}
	}else printf("\nA + B tidak dapat dilakukan\n");

	printf("\nHasil 2A:\n");
	for(i = 0; i < barisA; i++){
		for(j = 0; j < kolomA; j++)
			printf("%d ", 2 * A[i][j]);
		printf("\n");
	}

	printf("\nHasil B Transpose:\n");
	for(i = 0; i < kolomB; i++){
		for(j = 0; j < barisB; j++)
			printf("%d ", B[j][i]);
		printf("\n");
	}

	if(kolomA == barisB){
		printf("\nHasil AB:\n");
		for(i = 0; i < barisA; i++){
			for(j = 0; j < kolomB; j++){
				AB[i][j] = 0;
				for(k = 0; k < kolomA; k++)
					AB[i][j] += A[i][k] * B[k][j];
				printf("%d ", AB[i][j]);
			}
			printf("\n");
		}
	}else printf("\nPerkalian AB tidak dapat dilakukan\n");

	if(barisA == kolomA){
		if(barisA == 2)
			detA = A[0][0]*A[1][1] - A[0][1]*A[1][0];
		else if(barisA == 3)
			for(i = 0; i < 3; i++){
				int j = (i + 1) % 3, k = (i + 2) % 3;
				detA += A[0][i] * (A[1][j]*A[2][k] - A[1][k]*A[2][j]);
			}
		printf("\nDeterminan A = %d\n", detA);
	}else printf("\nDeterminan A tidak dapat dihitung (bukan 2x2 atau 3x3)\n");

	return 0;
}
