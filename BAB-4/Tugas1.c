#include <stdio.h>
#include <stdlib.h>
int main(){
    int matriksA[3][3];
    int matriksB[3][3];
    int hasil[3][3];
    int x,y;
    printf("Matriks A\n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("elemen [%d], [%d] : ",x,y);
            scanf("%d", &matriksA[x][y]);}
    }
    printf("\nMatriks B\n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("elemen [%d], [%d] : ",x,y);
            scanf("%d", &matriksB[x][y]);}
    }
    printf("\nNilai Matriks A :\n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("%d \t", matriksA[x][y]);}
        printf("\n");
    }
    printf("\nNilai Matriks B :\n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("%d \t", matriksB[x][y]);}
        printf("\n");
    }
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            hasil[x][y] = matriksA[x][y] + matriksB[x][y];}
    }
    printf("\nHasil penjumlahan :\n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("%d \t", hasil[x][y]);}
        printf("\n");
    }
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            hasil[x][y] = matriksA[x][y] - matriksB[x][y];}
    }
    printf("\nHasil pengurangan :\n");
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("%d \t", hasil[x][y]);}
        printf("\n");
    }
    return 0;
}
