#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Bilangan Genap nor Ganjil ----------- \n\n");

    int input, hasil;

    printf("Masukkan nilai a = ");
    scanf("%d", &input);

    hasil = input % 2;

    printf("\n");

    if(hasil == 0)
        printf("Nilai tersebut merupakan bilangan genap!\n");
    else
        printf("Nilai tersebut merupakan bilangan ganjil!\n");
}
