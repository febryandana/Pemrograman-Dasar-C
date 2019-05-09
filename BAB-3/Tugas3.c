#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c,vol;
	float phi = 3.14159;
	int bil;
	char pil;
	do {
		system("cls");
		printf("MENU\n");
		printf("0. KELUAR\n");
		printf("1. HITUNG VOLUME BALOK\n");
		printf("2. HITUNG VOLUME BOLA\n");
		printf("3. HITUNG VOLUME KERUCUT\n");
		printf("4. HITUNG VOLUME SILINDER\n");
		printf("5. HITUNG VOLUME LIMAS SEGITIGA\n");
		printf("MASUKKAN PILIHAN ANDA: ");
		scanf("%d", &bil);
		switch(bil){
			case 0 :
				break;
			case 1 :
				printf("\n\nMENGHITUNG VOLUME BALOK\n\n");
				printf("Masukkan panjang:");
				scanf("%f", &a);
				printf("Masukkan lebar:");
				scanf("%f", &b);
				printf("Masukkan tinggi:");
				scanf("%f", &c);
				vol = a*b*c;
				printf("Volume balok adalah: %g", vol);
				break;
			case 2 :
				printf("\n\nMENGHITUNG VOLUME BOLA\n\n");
				printf("Masukkan jari-jari:");
				scanf("%f", &a);
				vol = (4.0/3.0)*phi*a*a*a;
				printf("Volume bola adalah: %g", vol);
				break;
			case 3 :
				printf("\n\nMENGHITUNG VOLUME KERUCUT\n\n");
				printf("Masukkan jari-jari alas:");
				scanf("%f", &a);
				printf("Masukkan tinggi:");
				scanf("%f", &b);
				vol = (1.0/3.0)*(phi*a*a*b);
				printf("Volume kerucut adalah: %g", vol);
				break;
			case 4 :
				printf("\n\nMENGHITUNG VOLUME SILINDER\n\n");
				printf("Masukkan jari-jari alas:");
				scanf("%f", &a);
				printf("Masukkan tinggi:");
				scanf("%f", &b);
				vol = phi*a*a*b;
				printf("Volume tabung adalah: %g", vol);
				break;
			case 5 :
				printf("\n\nMENGHITUNG VOLUME LIMAS SEGITIGA\n\n");
				printf("Masukkan alas segitiga:");
				scanf("%f", &a);
				printf("Masukkan tinggi segitiga:");
				scanf("%f", &b);
				printf("Masukkan tinggi limas:");
				scanf("%f", &c);
				vol = (1.0/3.0)*((1.0/2.0)*a*b)*c;
				printf("Volume limas segitiga adalah: %g", vol);
				break;
			default :
				printf("\n\nMAAF, PILIHAN ANDA TIDAK ADA DALAM MENU\n\n");
		}
	printf("\n\nHITUNG LAGI? [Y/T]: ");
	scanf("%s", &pil);
	} while((pil !='t') && (pil !='T'));
	return 0;
}
