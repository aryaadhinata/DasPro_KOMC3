#include <stdio.h>

int main(){
	int hari;
	scanf("%d", &hari);
	
	switch(hari){
		case 1: printf("hari senin"); break;
		case 2 : {
			printf("hari selasa");
			break;
		}
		case 3 : {
			printf("hari rabu");
			break;
		}
		case 4 : {
			printf("hari kamis");
			break;
		}
		case 5 : {
			printf("hari jum'at");
			break;
		}
		case 6 : {
			printf("hari sabtu");
			break;
		}
		case 7 : {
			printf("hari minggu");
			break;
		}
		default : {

			printf("tidak ada hari ke : %d\n", hari);
		break;

		}
	}
	return 0;
}