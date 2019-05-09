#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int jam, upah, lembur, denda, total;
	printf("Jam kerja: ");
	scanf("%d", &jam);
	if(jam > 60){
		upah = 60*5000;
		lembur = (jam-60)*6000;
		denda = 0;
		total = upah+lembur;
	} else if(jam > 50){
		upah = jam*5000;
		lembur = 0;
		denda = 0;
		total = upah;
	} else {
		upah = jam*5000;
		lembur = 0;
		denda = (50-jam)*1000;
		total = upah-denda;
	}
	printf("\nUpah \t= Rp. %6d", upah);
	printf("\nLembur \t= Rp. %6d", lembur);
	printf("\nDenda \t= Rp. %6d", denda);
	printf("\n--------------------------");
	printf("\nTotal \t= Rp. %6d", total);
	return 0;
}
