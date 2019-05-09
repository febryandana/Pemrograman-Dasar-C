#include <stdio.h>

void greeting(char* nama) {
    printf("Hello, %s\n", nama);
}

void morningGreeting() {
    printf("Good morning\n");
}

int main() {
    char nama[50]; // 50 karakter nama
    printf("Masukkan nama : ");
    scanf("%c", nama);
    morningGreeting();
    greeting(nama);
return 0;
}
