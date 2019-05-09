#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b,r,kel,luas,pil;
	printf("Menu:\n");
	printf("1. menghitung luas dan keliling persegi panjang\n");
	printf("2. menghitung luas dan keliling lingkaran\n");
	printf("3. menghitung luas dan keliling segitiga\n");
	printf("\nPilihan Anda: ");
	scanf("%d", &pil);
	switch(pil) {
		case 1 :
			printf("\nMasukkan a: ");
			scanf("%d", &a);
			printf("Masukkan b: ");
			scanf("%d", &b);
			kel = 2*(a+b);
			luas = a*b;
			printf("\nKeliling persegi panjang : %d cm", kel);
			printf("\nLuas persegi panjang : %d cm2", luas);
			break;	
		case 2 :
			printf("\nMasukkan r: ");
			scanf("%d", &r);
			kel = 2*3.14*r;
			luas = 3.14*r*r;
			printf("\nKeliling lingkaran : %d cm", kel);
			printf("\nLuas lingkaran : %d cm2", luas);
			break;
		case 3 :
			printf("\nMasukkan a: ");
			scanf("%d", &a);
			printf("Masukkan b: ");
			scanf("%d", &b);
			printf("Masukkan r: ");
			scanf("%d", &r);
			kel = a+b+r;
			luas = (a*b)/2;
			printf("\nKeliling segitiga : %d cm", kel);
			printf("\nLuas segitiga : %d cm2", luas);
			break;	
		default :
			printf("\nData tak ditemukan, program dihentikan ...");
	}
	return 0;
}
