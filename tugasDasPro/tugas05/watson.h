#include <stdio.h>
#include <math.h>
#include <string.h>

int tesBarisKolom(int sudoku[9][9]); // mengecek baris kolom
int tesBagian(int sudoku[9][9]); // mengecek bagian 3x3
void tabel(int n, char nama[][513], int jarak[n]); // membuat tabel
void stat(int avrgSpd, int jamMulai, int menitMulai, 
		  int jamAlarm, int menitAlarm, int n, int jarak[n]); // statistik data