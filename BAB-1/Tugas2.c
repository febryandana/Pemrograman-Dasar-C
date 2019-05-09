#include <stdio.h>
#include <stdlib.h>
int main()
{
char nama[100], klrhn[100];
int awal, akhir, beban, PPJ, pemakaian, tarif, hasilPPJ, total;
    printf("Program penghitung pemakaian listrik sederhana \n");
    printf("Masukkan nama : ");
        scanf(" %[^\n]s", nama);
    printf("Masukkan kelurahan : ");
        scanf(" %[^\n]s", klrhn);
    printf("Masukkan posisi awal Kwh Meter : ");
        scanf("%d", &awal);
    printf("Masukkan posisi akhir Kwh Meter : ");
        scanf("%d", &akhir);
    printf("Masukkan biaya beban saat ini : ");
        scanf("%d", &beban);
    printf("Masukkan PPJ (dalam persen) : ");
        scanf("%d", &PPJ);
	pemakaian = akhir - awal;
    tarif = beban * pemakaian;
    hasilPPJ = tarif / PPJ;
    total = tarif + hasilPPJ;
	printf("=============PLN %s ===============", klrhn);
    printf("\nNama : %s\n", nama);
    printf("Kelurahan : %s\n", klrhn);
    printf("Pemakaian bulan ini : %d KwH Meter\n", pemakaian);
    printf("Tarif listrik : Rp %d,- \n", tarif);
    printf("PPJ 10% : Rp %d,- \n", hasilPPJ);
    printf("Total bayar : Rp %d,- \n", total);
    printf("===================================");
    return 0;
}

