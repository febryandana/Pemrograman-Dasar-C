#include<stdio.h>
float faktorial(int n) {
    int hasil = 1;
    for (int i = 1 ; i <= n ; i++) {
    hasil *= i;
}
return hasil;
}

int main() {
    printf("Nilai dari 5! = %d\n", faktorial(5));
return 0;
}
