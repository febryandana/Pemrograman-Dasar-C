//Array1D.c
#include <stdio.h>
int main(){
    int i;
    int data[]={11,3,4,7,24};

    //menghitung jumlah byte yang dibutuhkan, karena int butuh 4 byte maka (jumlah memory / 4)
    int panjang = sizeof(data)/4;

    printf("sebelum\n");
    //mencetak semua nilai pada array sebelum diubah

    data[5]=10;
    for(i = 0; i < panjang; i++){
        printf("index ke-%d adalah %d\n",i,data[i]);
    }

    for(i = 0; i <panjang; i++){
        //nilai data sebelumnnya di kali 2
        data[i] = data[i]*2;
    }

    printf("\n\nSesudah\n");
    //mencetak semua nilai pada array sesudah diubah
    for(i = 0; i < panjang; i++){
        printf("index ke-%d adalah %d\n",i,data[i]);
    }
return 0;
}
