#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, baris, bintang;
	printf("Masukkan nilai n = ");
	scanf("%d", &n);
	for (baris = 1; baris <= n; baris++){
		for (bintang = 1; bintang <= baris; bintang++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
