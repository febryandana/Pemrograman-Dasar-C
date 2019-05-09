#include <stdio.h>
int main() {
	int nilai1, nilai2, hasil;
	long long nim;
	char nama[100];
	printf ("Masukkan nama Anda :");
	scanf(" %[^\n]s\n", &nama);
	printf ("Masukkan NIM Anda :");
	scanf("%lld", &nim);
	printf("Masukkan nilai 1 : ");
	scanf("%d", &nilai1);
	printf("Masukkan nilai 2 : ");
	scanf("%d", &nilai2);
	hasil = nilai1 + nilai2;
	printf("maka hasil = %d\n\n", hasil);
	printf("Nama Anda : %s\n", nama);
	printf("NIM Anda : %lld\n", nim);
	
return 0;
}
