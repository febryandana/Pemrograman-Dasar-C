#include <stdio.h>
#include <stdlib.h>
int main(){
    int input;
    printf("Masukkan bilangan yang diinginkan : ");
    scanf("%d", &input);
    inputprima(input);
    bil_prima();
    return 0;
}
void inputprima(int input){
    int i, flag=0;
    for(i=2; i<=input/2; ++i){
        if(input%i==0){
            flag=1; break;}}
    if(input==1){
        printf("\n1 bukanlah bilangan prima\n");}
    else{
        if(flag==0){
            printf("\n%d adalah bilangan prima\n", input);}
        else{
            printf("\n%d bukan bilangan prima\n", input);}
    }
}
void bil_prima(){
    int i, flag, low=2, high=100;
    printf("\nBilangan prima dari 1 sampai 100 :\n");
    while (low < high){
        flag = 0;
        for(i = 2; i <= low/2; ++i){
            if(low % i == 0){
                flag = 1;
                break;}
        }
        if (flag == 0){
            printf("%d ", low);}
        ++low;
    }
}
