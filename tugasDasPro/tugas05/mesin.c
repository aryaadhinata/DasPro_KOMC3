#include "watson.h"

int tesBarisKolom(int sudoku[9][9]){
	// fungsi yang mengecek apakah di setiap baris tidak ada angka yang sama
	
	// loop awal baris kolom
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			
			// loop untuk mengecek kesamaan nilai di baris dan kolom
			for(int k = (j + 1); k < 9; k++){
				// jika ada yang sama di baris return 0
				if (sudoku[i][j] == sudoku[i][k]){
					return 0;
				}
				
				// jika ada yang sama di kolom return 0
				if (sudoku [j][i] == sudoku[k][i]){
					return 0;
				}
			}
		}
	}
	
	// jika tidak ada yang sama di baris maupun kolom maka return 1 
	return 1;
}

int tesBagian(int sudoku[9][9]){
	// fungsi yang digunakan untuk mengecek apakah di setiap 3x3 tidak ada angka yang sama
	
	int count = 0; // set 0 untuk nilai awal terpenuhinya syarat
	
	// loop untuk membagi 9x9 ke 3x3 dan mengubahnya jadi 9 bagian
	for (int startRow = 0; startRow < 9; startRow += 3) {
        for (int startCol = 0; startCol < 9; startCol += 3) {
			
			// loop di dalam 3x3 untuk mengecek disetiap baris dan kolom
            for (int i = startRow; i < startRow + 3; i++) {
                for (int j = startCol; j < startCol + 3; j++) {

					// menyimpan nilai sekarang yang nantinya akan dibandingkan dengan nilai berikutnya
                    int scan = sudoku[i][j];
					
					// looping untuk nilai yang akan dibandingkan di dalam 3x3
                    for (int k = startRow; k < startRow + 3; k++) {
                        for (int l = startCol; l < startCol + 3; l++) {
    
							// jika bukan baris dan kolom yang sama coba bandingkan
							if (!(i == k && j == l)) { 
                                if (scan == sudoku[k][l]) {
                                    return 0; // jika ada yang sama return 0
                                }
                            }
                        }
                    }
                }
            }
			// jika satu bagian 3x3 tidak ada yang sama maka tambah 
            count++; 
        }
    }
	
	
	// karena seharusnya ada 9 bagian 3x3 maka harus ke 9 itu benar.
	if(count == 9){
		return 1;
	}else {
		return 0;
	}
}

void tabel(int n, char nama[n][513], int jarak[n]){
    int far = strlen("Nama Tempat"); // patokan nama yang paling panjang
    
	// loop untuk mengecek apakah ada nama tempat yang lebih panjang dari yang sebelumnya
	for (int i = 0; i < n; i++) {
        if (strlen(nama[i]) > far) {
            far = strlen(nama[i]);
        }
    }

	
    int jauh = strlen("Jarak"); // patokan untuk digit terpanjang
	// loop untuk mencari apakah ada digit yang lebih panjang dari yang sebelumnya
    for (int i = 0; i < n; i++) {
		int digit; // untuk menyimpan nilai panjang digit
		
		// jika jarak bernilai 0 maka punya 1 digit
		if (jarak[i] == 0) {
			digit = 1;
		} else { // selain 0 di log10 untuk menghitung digitnya
			digit = ((int)log10(jarak[i]) + 1);
		}
		
		// jika ada digit yang lebih panjang dari patokan
		if (digit > jauh) {
            jauh = digit;
        }
    }
	
	/*
		space1 = spasi untuk bagian nama tempat
		space2 = spasi untuk bagian jarak
		semua di set 0
	*/
    int space1 = 0, space2 = 0; 
	
	// loop untuk bagian pembatas
    for (int i = 0; i < (n + 4); i++) {
        
		// Baris garis pembatas (atas, tengah, bawah)
        if (i == 0 || i == 2 || i == (n + 3)) {
            printf("+");
            for (int j = 0; j < far + 2; j++){
				printf("-");
            }
			printf("+");
            for (int j = 0; j < jauh + 2; j++){
				printf("-");
            }
			printf("+\n");
        }
        
		// Baris header dari tabel
        else if (i == 1) {
            printf("| Nama Tempat");
			
			// pengkondisian jika ada yang lebih panjang dari "Nama Tempat"
            if (far > strlen("Nama Tempat")){
                space1 = far - strlen("Nama Tempat");
			}else{
                space1 = 0;
			}
			// menambahkan spasi sampe ke ujung jika kurang panjang
            for (int j = 0; j < (space1 + 1); j++){
				printf(" ");
			}
            
			printf("| Jarak");
			// pengkondisian jika ada yang lebih panjang dari "Jarak"
            if (jauh > strlen("Jarak")){
                space2 = jauh - strlen("Jarak");
            }else{
                space2 = 0;
			}	
			// menambahkan spasi sampe ke ujung jika kurang panjang
            for (int j = 0; j < (space2 + 1); j++){
				printf(" ");
            }
			printf("|\n");
        }
        
		// Baris data (nama tempat & jarak)
        else if (i > 2 && i < (n + 3)) {
            int idx = i - 3; // untuk mendapatkan index awal 0
            printf("| %s", nama[idx]);
			
			// pengkondisian jika ada yang lebih panjang dari nama[idx]
            if (far > strlen(nama[idx])){
                space1 = far - strlen(nama[idx]);
            }else{
                space1 = 0;
			}
			// menambahkan spasi sampai ke ujung jika kurang panjang
            for (int j = 0; j < (space1 + 1); j++){
				printf(" ");
			}
			
            printf("| %d", jarak[idx]);
			int digit; // untuk menyimpan nilai panjang digit
		
			// jika jarak bernilai 0 maka punya 1 digit
			if (jarak[idx] == 0) {
				digit = 1;
			} else { // selain 0 di log10 untuk menghitung digitnya
				digit = ((int)log10(jarak[idx]) + 1);
			}
			// pengkondisian jika ada yang lebih panjang dari digit
            if (jauh > digit){
                space2 = jauh - digit;
            }else{
                space2 = 0;
            }
			// menambahkan spasi ke ujung
			for(int j = 0; j < (space2 + 1); j++){
				printf(" ");
            }
			printf("|\n");
        }
    }
}

void stat(int avrgSpd, int jamMulai, int menitMulai, 
		  int jamAlarm, int menitAlarm, int n, int jarak[n]){
	int sum = 0;
	// loop menotalkan jarak
	for(int i = 0; i < n; i++){
		sum += jarak[i];
	}
	
	
	printf("Total jarak: %0.2f km\n", (sum*1.0));
	printf("kecepatan: %0.2f km/jam\n", (avrgSpd*1.0));
	printf("Waktu tempuh: %0.2f jam\n", ((sum*1.0)/(avrgSpd*1.0)));
	
	// Hitung waktu tempuh dalam jam
	int jAlarm = sum / avrgSpd;
	// Hitung waktu tempuh dalam menit
	int mAlarm = ((sum * 1.0 / avrgSpd) * 60) + 0.49;

	// Tambahkan waktu tempuh ke waktu mulai untuk mendapatkan waktu alarm total
	int totalJam = jAlarm + jamMulai;
	int totalMenit = mAlarm + menitMulai;
	
	// jika total menit lebih dari 60 menit tambahkan jam
	if (totalMenit >= 60) {
		totalJam += totalMenit / 60;
		totalMenit %= 60;
	}
	
	//untuk lebih dari 24 jam
	if(totalJam >= 24){
		totalJam %= 24;
	}
	
	
	// pengkondisian untuk digit jamTotal
	if (totalJam == 0 && totalMenit == 0) {
		printf("Alarm disetel pada: 00:00\n");
	} else if (totalJam < 10 && totalMenit < 10) {
		printf("Alarm disetel pada: 0%d:0%d\n", totalJam, totalMenit);
	} else if (totalJam < 10) {
		printf("Alarm disetel pada: 0%d:%d\n", totalJam, totalMenit);
	} else if (totalMenit < 10) {
		printf("Alarm disetel pada: %d:0%d\n", totalJam, totalMenit);
	} else {
		printf("Alarm disetel pada: %d:%d\n", totalJam, totalMenit);
	}
	
	// pengkondisian untuk digit jamAlarm
	if (jamAlarm == 0 && menitAlarm == 0) {
		printf("Waktu seharusnya: 00:00\n");
	} else if (jamAlarm < 10 && menitAlarm < 10) {
		printf("Waktu seharusnya: 0%d:0%d\n", jamAlarm, menitAlarm);
	} else if (jamAlarm < 10) {
		printf("Waktu seharusnya: 0%d:%d\n", jamAlarm, menitAlarm);
	} else if (menitAlarm < 10) {
		printf("Waktu seharusnya: %d:0%d\n", jamAlarm, menitAlarm);
	} else {
		printf("Waktu seharusnya: %d:%d\n", jamAlarm, menitAlarm);
	}

	// kondisi syarat keberhasilan mengatur alarm
	if((jamAlarm > totalJam) || (jamAlarm == totalJam && menitAlarm >= totalMenit)){
		printf("Watson berhasil mengatur alarm tepat waktu!\n");
	}else{
		printf("Watson gagal, ia melewatkan rapat!\n");
	}
}