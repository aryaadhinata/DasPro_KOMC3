#include <stdio.h>

/*
	Saya Mohammad Arya Dhinata dengan NIM 2504992 mengerjakan Tugas Pratikum 1 dalam 
	mata kuliah dasar-dasar pemrogaraman untuk keberkahanNya maka saya tidak melakukan
	kecurangan seperti yang di spesifikasikan. Aamin
*/

int main(){
	/*
	deklarasi variabel:
	*	fakhri, daffa, azmi, nurul untuk menyimpan jumlah anggota kelompok.
	*	listrik untuk menyimpan banyaknya daya yang dihunakan untuk pergi ke Isekai.
	*	total untuk menyimpan jumlah mahasiswa.
	*	totalListrik untuk menyimpan banyaknya daya listrik yang digunakan oleh seluruh
		mahasiswa.
	*	fakhri (selamat, terjebak, online, hilang) untuk menyimpan kondisi kelompok.
	*	daffa (selamat, terjebak, online, hilang) untuk menyimpan kondisi kelompok. 
	*	azmi (selamat, terjebak, online, hilang) untuk menyimpan kondisi kelompok.
	*	nurul (selamat, terjebak, online, hilang) untuk menyimpan kondisi kelompok.
	*	totalSelamat menyimpan banyaknya mahasiswa yang selamat.
	*	totalTerjebak menyimpan banyaknya mahasiswa yang terjebak.
	*	totalOnline menyimpan banyaknya mahasiswa yang online.
	*	totalHilang menyimpan banyaknya mahasiswa yang hilang.
	*/
	int fakhri, daffa, azmi, nurul, listrik, total, totalListrik, 
		fakhriSelamat, fakhriTerjebak, fakhriOnline, fakhriHilang,
		daffaSelamat, daffaTerjebak, daffaOnline, daffaHilang,
		azmiSelamat, azmiTerjebak, azmiOnline, azmiHilang,
		nurulSelamat, nurulTerjebak, nurulOnline, nurulHilang,
		totalSelamat, totalTerjebak, totalOnline, totalHilang;
	
	// set keadaan fakhri (selamat, terjebak, online, hilang).
	fakhriSelamat = 0;
	fakhriTerjebak = 0;
	fakhriOnline = 0;
	fakhriHilang = 0;
	
	// set keadaan daffa (selamat, terjebak, online, hilang).
	daffaSelamat = 0;
	daffaTerjebak = 0;
	daffaOnline = 0;
	daffaHilang = 0;
	
	// set keadaan azmi (selamat, terjebak, online, hilang).
	azmiSelamat = 0;
	azmiTerjebak = 0;
	azmiOnline = 0;
	azmiHilang = 0;
	
	// set keadaan nurul (selamat, terjebak, online, hilang).
	nurulSelamat = 0;
	nurulTerjebak = 0;
	nurulOnline = 0;
	nurulHilang = 0;
	
	// meminta masukan jumlah kelompok Fakhri, Daffa, Azmi dan Nurul,
	// serta berapa banyak listrik yang dibutuhkan untuk ke Isekai.
	scanf("%d %d %d %d", &fakhri, &daffa, &azmi, &nurul);
	scanf("%d", &listrik);
	
	// menambah nilai 1 ke Fakhri, Daffa, Azmi dan Nurul karena mereka ketuanya.
	fakhri += 1;
	daffa += 1;
	azmi += 1;
	nurul += 1;
	
	// menghitung seluruh mahasiwa dari kelompok Fakhri, Daffa, Azmi dan Nurul,
	// serta menghitung total listrik yang dibutuhkan.
	total = fakhri + daffa + azmi + nurul;
	totalListrik = total * listrik;
	
	// mengeluarkan nilai jumlah mahasiswa di kelompok Fakhri, Daffa, Azmi dan Nurul,
	// totalnya serta jumlah listrik yang dibutuhkan.
	printf("*-------------------------------------------------------*\n");
	printf("Jumlah mahasiswa yang ikut:\n");
	printf("- Kelompok Fakhri: %d mahasiswa\n", fakhri);
	printf("- Kelompok Daffa: %d mahasiswa\n", daffa);
	printf("- Kelompok Azmi: %d mahasiswa\n", azmi);
	printf("- Kelompok Nurul: %d mahasiswa\n", nurul);
	printf("Total: %d Mahasiswa\n\n", total);
	printf("Jumlah daya listrik yang dibutuhkan: %d Watt\n\n", totalListrik);
	printf("Saatya perjalanan menuju Isekai!!!\n");
	printf("*-------------------------------------------------------*\n\n\n");
	printf("*-------------------------------------------------------*\n");
	printf("     !!!!!  ALAMAK! KITA DISERANG KAUM IBLIS!  !!!!!\n");
	printf("          !!!!!  SEMUANYA CEPAT KEMBALI!  !!!!!\n");
	printf("*-------------------------------------------------------*\n");
	printf("Status kelompok:\n");
	
	// pengkondisian untuk kondisi kelompok Fakhri.
	if(fakhri % 2 == 1){
		fakhriTerjebak = fakhri;
		if(fakhri % 3 == 0){
			fakhriOnline = fakhri;
			printf("- Kelompok Fakhri: Terjebak (Online)\n");
		}else{
			fakhriHilang = fakhri;
			printf("- Kelompok Fakhri: Terjebak (Hilang!)\n");
		}
	}else{
		fakhriSelamat = fakhri;
		printf("- Kelompok Fakhri: Selamat (Horee!!)\n");
	}
	
	// pengkondisian untuk kondisi kelompok daffa.
	if(daffa % 2 == 1){
		daffaTerjebak = daffa;
		if(daffa % 3 == 0){
			daffaOnline = daffa;
			printf("- Kelompok Daffa: Terjebak (Online)\n");
		}else{
			daffaHilang = daffa;
			printf("- Kelompok Daffa: Terjebak (Hilang!)\n");
		}
	}else{
		daffaSelamat = daffa;
		printf("- Kelompok Daffa: Selamat (Horee!!)\n");
	}
	
	// pengkondisian untuk kondisi kelompok Azmi.
	if(azmi % 2 == 1){
		azmiTerjebak = azmi;
		if(azmi % 3 == 0){
			azmiOnline = azmi;
			printf("- Kelompok Azmi: Terjebak (Online)\n");
		}else{
			azmiHilang = azmi;
			printf("- Kelompok Azmi: Terjebak (Hilang!)\n");
		}
	}else{
		azmiSelamat = azmi;
		printf("- Kelompok Azmi: Selamat (Horee!!)\n");
	}
	
	// pengkondisian untuk kondisi kelompok Nurul.
	if(nurul % 2 == 1){
		nurulTerjebak = nurul;
		if(nurul % 3 == 0){
			nurulOnline = nurul;
			printf("- Kelompok Nurul: Terjebak (Online)\n\n");
		}else{
			nurulHilang = nurul;
			printf("- Kelompok Nurul: Terjebak (Hilang!)\n\n");
		}
	}else{
		nurulSelamat = nurul;
		printf("- Kelompok Nurul: Selamat (Horee!!)\n\n");
	}	
	
	// mengitung total (selamat, terjebak, online, hilang) dari kelompok
	// akhri, Daffa, Azmi dan Nurul.
	totalSelamat = fakhriSelamat + daffaSelamat + azmiSelamat + nurulSelamat;
	totalTerjebak = fakhriTerjebak + daffaTerjebak + azmiTerjebak + nurulTerjebak;
	totalOnline = fakhriOnline + daffaOnline + azmiOnline + nurulOnline;
	totalHilang = fakhriHilang + daffaHilang + azmiHilang + nurulHilang;
	
	// mengeluarkan nilai jumlah mahasiswa yang selamat, terjebak, online dan hilang.
	printf("Jumlah mahasiswa selamat: %d mahasiswa\n", totalSelamat);
	printf("Jumlah mahasiswa terjebak: %d mahasiswa:\n", totalTerjebak);
	printf("    - Online: %d mahasiswa\n", totalOnline);
	printf("    - Hilang: %d mahasiswa\n\n", totalHilang);
	
	// mengeluarkan nilai total jumlah daya listrik yang dibutuhkan untuk kembali
	// dan total keseluruh daya listrik yang harus digunakan.
	printf("Jumlah daya listrik untuk kembali: %d Watt\n", (totalSelamat * listrik));
	printf("Total keseluruhan: %d Watt\n\n", ((totalSelamat * listrik) + totalListrik));
	
	// pengkondisian dari kondisi mahasiswa yang selamat.
	if(totalSelamat == total){
		printf("Alhamdulillah semua mahasiswa selamat!\n");
		printf("Aparat iblis tidak akan bisa menculik mahasiswa UPI!!!\n");
	}else if(totalSelamat == 0){
		printf("Alamak! semua mahasiswa terjebak di dunia lain!!\n");
		printf("Semoga tidak ada hal buruk menimpa mereka.\n");
	}else{
		printf("Alamak! ada %d mahasiswa tejebak di dunia lain!\n", totalTerjebak);
		printf("Semoga mereka semua baik-baik saja.\n");
	}
	
	printf("*-------------------------------------------------------*\n");
	return 0;
}

/*
	menghitung banyak mahasiswa yang selamat setelah pergi ke Isekai dan diserang raja IBLIS.
*/