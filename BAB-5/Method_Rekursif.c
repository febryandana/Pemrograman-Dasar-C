#include<stdio.h>
int faktorial(int n) {
    //return (n == 1) ? 1 : n * faktorial(n - 1);
    return faktorial(n-1);
}

int main() {
    printf("Nilai dari 5! = %d\n", faktorial(5));
return 0;
}
