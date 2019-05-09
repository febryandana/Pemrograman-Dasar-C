#include <stdio.h>
#include <stdlib.h>
    int main(){
        int i, j, a, n, number[30];
        printf("Masukkan ukuran array : ");
        scanf("%d", &n);
        printf("\nMasukkan nilainya : \n");
        for (i = 0; i < n; ++i){
            scanf("%d", &number[i]);}
        for (i = 0; i < n; ++i){
            for (j = i + 1; j < n; ++j){
                if (number[i] > number[j]){
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("\nAngka yang telah diurutkan dari terkecil ke terbesar :\n");
        for (i = 0; i < n; ++i){
            printf("%d\n", number[i]);}
return 0;
    }
