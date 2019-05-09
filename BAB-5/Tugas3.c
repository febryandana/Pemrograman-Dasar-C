#include <stdio.h>
#include <stdlib.h>
int x, y, baris, kolom;
int dest[3][3];
int a[3][3];
int b[3][3];
void addition(){
    printf("\nHasil penjumlahan matriks A+B\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            dest[y][x]=a[y][x]+b[y][x];}}
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("%d\t", dest[y][x]);}
        printf("\n");}
}
void subtraction(){
    printf("\nHasil pengurangan matriks A-B\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            dest[y][x]=a[y][x]-b[y][x];}}
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("%d\t", dest[y][x]);}
        printf("\n");}
}
void multiplication(){
    printf("\nHasil perkalian matriks AxB\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            dest[y][x]=a[y][x]*b[y][x];}}
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("%d\t", dest[y][x]);}
        printf("\n");}
}
int isDiagonalMatrix(){
    int source[3][3], flag;
    printf("\nMasukkan banyak baris matriks = ");
    scanf("%d", &baris);
    printf("Masukkan banyak kolom matriks = ");
    scanf("%d", &kolom);
    if(baris == kolom){
        printf("Masukkan elemen Array\n");
        for(y=0; y<baris; y++){
            for(x=0; x<kolom; x++){
                printf("elemen [%d][%d]= ", y,x);
                scanf("%d", &source[y][x]);}}
        for(y=0; y<baris; y++){
            for(x=0; x<kolom; x++){
                printf("%d\t", source[y][x]);}
            printf("\n");}
        flag=1;
        for(y=0; y<baris; y++){
            for(x=0; x<kolom; x++){
                if(y==x){
                    if(source[y][x] == 0)
                        flag=0;}
                else{
                    if(source[y][x] != 0)
                        flag=0;}
            }
        }
        if(flag==1){
            printf("\nMatriks Diagonal\n");}
        else{
            printf("\nBukan Matriks Diagonal\n");}}
    else{
        printf("Maaf, bukan matriks persegi");}
}
int isIdentityMatrix(){
    int source[3][3];
    int flag=1;
    printf("\nMasukkan banyak baris matriks = ");
    scanf("%d", &baris);
    printf("Masukkan banyak kolom matriks = ");
    scanf("%d", &kolom);
    printf("Masukkan elemen Array\n");
        for(y=0; y<baris; y++){
            for(x=0; x<kolom; x++){
                printf("elemen [%d][%d]= ", y,x);
                scanf("%d", &source[y][x]);}}
        for(y=0; y<baris; y++){
            for(x=0; x<kolom; x++){
                printf("%d\t", source[y][x]);}
            printf("\n");}
        for(y=0;y<baris; y++){
            for(x=0; x<kolom; x++){
                if(source[y][x] != 1 && source[x][y] !=0){
                    flag=0; break;
                }
            }
        }
        if(flag==1){
            printf("\nMatriks Identitas\n");}
        else{
            printf("\nBukan Matriks Identitas\n");}
}
int main(){
    printf("Masukkan elemen matriks A (3x3)\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("elemen [%d][%d]= ", y,x);
            scanf("%d", &a[y][x]);}}
    printf("\nMasukkan elemen matriks B (3x3)\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("elemen [%d][%d]= ", y,x);
            scanf("%d", &b[y][x]);}}
    printf("\nNilai matriks A\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("%d\t", a[y][x]);}
        printf("\n");}
    printf("\nNilai matriks B\n");
    for(y=0; y<3; y++){
        for(x=0; x<3; x++){
            printf("%d\t", b[y][x]);}
        printf("\n");}
    addition();
    subtraction();
    multiplication();
    isDiagonalMatrix();
    isIdentityMatrix();
    return 0;
}
