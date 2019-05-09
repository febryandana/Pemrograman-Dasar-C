#include <stdio.h>
#include <stdlib.h>
int main(){
    int array1[25];
    int array2[25];
    int array3[25];
    int n1,n2,i,j,k,sum;
    printf("Masukkan banyak array pertama : ");
    scanf("%d", &n1);
    printf("Masukkan elemen array pertama:\n");
    for(i=0; i<n1; i++){
        scanf("%d", &array1[i]);}
    printf("Masukkan banyak array kedua : ");
    scanf("%d", &n2);
    printf("Masukkan elemen array kedua:\n");
    for(j=0; j<n2; j++){
        scanf("%d", &array2[j]);}
    printf("\n\nIsi array pertama : ");
    for(i=0; i<n1; i++){
    printf("%d ", array1[i]);}
    printf("\n\nIsi array kedua : ");
    for(j=0; j<n2; j++){
        printf("%d ", array2[j]);}
    sum = n1+n2;
    for(i=0; i<n1; i++){
        array3[i]=array1[i];}
    for(j=n1; j<sum; j++){
        array3[j]=array2[j-n1];}
    printf("\n\nGabungan array : \n");
    for(k=0; k<sum; k++){
        printf("%d ", array3[k]);}
return 0;
}
