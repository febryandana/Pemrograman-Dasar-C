#include <stdio.h>
int main() {
	int uang;
	printf("Tipe Mata uang yang tersedia\n");
	printf("1. Dolar - USA (kurs USD 1 = Rp 13000,-)\n");
	printf("2. Yen - Jepang ( kurs JPY 1 = Rp. 4000,- )\n");
	printf("3. Poundsterling - Inggris ( kurs 1 Poundsterling = Rp. 10.500, -)\n");
	printf("4. Euro - MEE ( kurs EUR 1 = Rp. 8900,- )\n");
	printf("5. Riyal - Arab Saudi ( kurs 1 Riyal = Rp. 1100,-)\n");
	printf("Masukkan jenis mata uang anda : ");
	int pilihan;
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("Data diterima, jenis valuta Anda : Dolar Amerika Serikat\n");
			printf("Masukkan banyak uang Anda (dalam dolar) : ");
			scanf("%d", &uang);
			printf("Uang yang diterima : Rp. %d ,-",uang*13000); break;
		case 2 :
			printf("Data diterima, jenis valuta Anda : Yen Jepang\n");
			printf("Masukkan banyak uang Anda (Yen Jepang) : ");
			scanf("%d", &uang);
			printf("Uang yang diterima : Rp. %d ,-",uang*4000); break;
		case 3 :
			printf("Data diterima, jenis valuta Anda : Poundsterling Inggris\n");
			printf("Masukkan banyak uang Anda (Poundsterling Inggris) : ");
			scanf("%d", &uang);
			printf("Uang yang diterima : Rp. %d ,-",uang*15000); break;
		case 4 :
			printf("Data diterima, jenis valuta Anda : Euro MEE\n");
			printf("Masukkan banyak uang Anda (Euro MEE) : ");
			scanf("%d", &uang);
			printf("Uang yang diterima : Rp. %d ,-",uang*14000); break;
		case 5 :
			printf("Data diterima, jenis valuta Anda : Riyal Arab Saudi\n");
			printf("Masukkan banyak uang Anda (Riyal Arab Saudi) : ");
			scanf("%d", &uang);
			printf("Uang yang diterima : Rp. %d ,-",uang*5000); break;
		default: printf("system not found\n");
	}
	return 0;
}
