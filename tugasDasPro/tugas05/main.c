/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan tes pemrogaraman
	dalam mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/
#include "watson.h"

int main(){
	// bagian meminta input vaiabel untuk sudoku 9x9
	int sudoku[9][9]; 
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }
	
	// bagian menginput banyaknya tempat dan jaraknya
	int n;
	scanf("%d", &n);
	char nama[n][513];
	int jarak[n], m = 0;
	do { // input nama
		scanf("%s", nama[m]);
		m++;
	} while (m < n);
	m = 0; // reset m untuk loop berikutnya
	do { // input jarak
		scanf("%d", &jarak[m]);
		m++;
	} while (m < n);
	
	// input kecepatan rata rata dan juga waktu ketika mulai dan waktu selesai seharusnya
	int avrgSpd, jamMulai, menitMulai, jamAlarm, menitAlarm;
	scanf("%d", &avrgSpd);
	scanf("%d %d", &jamMulai, &menitMulai);
	scanf("%d %d", &jamAlarm, &menitAlarm);
	
	tabel(n, nama, jarak); // prosedur tabel yang didalamnya membuat tabel
	
	printf("\n");
	
	// prosedur stat yang didalamnya untuk mengeluarkan informasi stat waktu & jarak
	stat(avrgSpd, jamMulai, menitMulai, jamAlarm, menitAlarm, n, jarak);
	
	/*
		tesBaris(), tesKolom(), tesBagian() adalah fungsi yang akan mengembalikan 1
		jika syarat dari sudoku terpenuhi.	
	*/
	if(tesBarisKolom(sudoku) && tesBagian(sudoku) == 1){
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\nGEeeeee3L0 Dr.WatsOn berhsil menyelsaikan sudoku\n");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	}else{
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\nO0o0o0oOoOO0omg Dr.Watson gagaal menyelesaikan sudoku\n");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	}
		
	return 0;
}