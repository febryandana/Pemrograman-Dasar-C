#include <stdio.h>
int main() {
int nilai;
	printf("pernyataan break batas 10\n");
	for (nilai = 1 ; nilai <= 10 ; nilai++) {
		if (nilai == 5) break;
		else printf("%d\n", nilai);
	}
	printf("\npernyataan continue batas 10\n");
	for (nilai = 1 ; nilai <= 10 ; nilai++) {
		if (nilai == 5) continue;
		else printf("%d\n", nilai);
	}
	return 0;
}
