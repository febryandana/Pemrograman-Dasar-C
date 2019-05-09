#include <stdio.h>
int main() {
	int nilai;
	printf("masukkan nilai : ");
	scanf("%d",&nilai);
	if(nilai * 2 < 50){
		nilai += 10;
	}
	if(nilai <= 20 && nilai % 2 == 1){
			printf("Filkom\nUB\n");
	} else if(nilai <= 20 && nilai % 2 == 0){
			printf("Filkom\nBrawijaya\n");
	} else if(nilai > 20 && nilai % 2 == 1) {
			printf("PTIIK\nUB\n");
	} else {
		printf("PTIIK\nBrawijaya\n");
	}
	
	return 0;
}
