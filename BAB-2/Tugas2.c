#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int b;
	float t, imt;
	printf("Berat badan (kg): ");
	scanf("%d", &b);
	printf("Tinggi badan (m): ");
	scanf("%f", &t);
	imt = b/(t*t);
	if(imt > 30){
		printf("IMT = %.2f", imt);
		printf("%20s","Termasuk kegemukan");
	} else if(imt > 25){
		printf("IMT = %.2f", imt);
		printf("%20s","Termasuk gemuk");
	} else if(imt > 18.5){
		printf("IMT = %.2f", imt);
		printf("%20s","Termasuk normal");
	} else{
		printf("IMT = %.2f", imt);
		printf("%20s","Termasuk kurus");
	}
	return 0;
}
