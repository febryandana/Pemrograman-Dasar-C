//Array2D.c
#include <stdio.h>
//mendefinisikan fungsi length
#define length(arr) ((int) (sizeof (arr) / sizeof (arr)[0][0]))

int main(){

    /* membuat array dengan baris 3 dan kolom 3
           0  1  2
        0 [] [] []
        1 [] [] []
        2 [] [] []
    */
    int data[3][3];
    int i,j;
    //mengetahui panjang kolom
    int kolom = length(data);
    //mengetahui panjang baris
    int baris = length(data[0][0]);

    //mengisi data array
    for(i=0; i<kolom; i++){
        for(j=0; j<baris; j++){
            data[i][j] = i*j;
        }
    }

    //mencetak nilai dalam array
    for(i=0; i<kolom; i++){
        for(j=0; j<baris; j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
