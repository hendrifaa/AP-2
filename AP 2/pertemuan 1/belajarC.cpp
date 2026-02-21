#include <stdio.h>  // header standar untuk c
#include <conio.h>

int main() {
    char nama[50], kom[2];
    int nim;
    float ip;

    printf("Hello Wold !! \n"); // printf untuk fungsi output pada c

    printf("Masukkan Nama : ");
    gets(nama);  // gets --> get string

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    getchar();

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    /* Output */
    printf("Nama : ");
    puts(nama);  // put string; untuk strings dalam bentuk array char

    printf("%d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("%f\n", ip);
    printf("Press any button to continue...");
    getch();
}