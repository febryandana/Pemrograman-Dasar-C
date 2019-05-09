#include <stdio.h>
// menunjuk ke alamat memori sebenarnya dengan pointer
void multiplyArray(int arr[], int length, int multiplier) {
    for (int i = 0 ; i < length ; i++) {
    arr[i] *= multiplier;}
}
void print(int arr[], int length) {
    for (int i = 0 ; i < length ; i++) {
        printf("%d ", arr[i]);}
    printf("\n");
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    multiplyArray(&array, sizeof(array) / sizeof(*array), 7);
    print(array, sizeof(array) / sizeof(*array));
return 0;
}
