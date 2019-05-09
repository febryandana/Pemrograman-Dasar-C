#include <stdio.h>
int main() {
	float nilai;
	printf("masukkan nilai : ");
	scanf("%f",&nilai);
	if (nilai > 60){
	printf("Anda Lulus\n");
	} else if (nilai >= 40){
	printf("Anda harus mengulang\n");
	} else {
	printf("Anda gagal\n");
	}
	return 0;
}

