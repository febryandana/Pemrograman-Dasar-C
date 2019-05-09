#include <stdio.h>
#include <stdlib.h>
int main()
{
    float op1, op2, jumlah, kurang, kali, bagi;
    printf("Masukkan operator pertama : ");
    scanf("%f", &op1);
    printf("Masukkan operator kedua : ");
    scanf("%f", &op2);
    jumlah = op1 + op2;
    kurang = op1 - op2;
    kali = op1 * op2;
    bagi = op1 / op2;
    printf("Hasil penjumlahan : %g\n", jumlah );
    printf("Hasil pengurangan : %g\n", kurang );
    printf("Hasil perkalian   : %g\n", kali );
    printf("Hasil pembagian   : %g\n", bagi );
    return 0;
}

