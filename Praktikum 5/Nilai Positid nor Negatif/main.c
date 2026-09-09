#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Bilangan Positif nor Negatif ----------- \n\n");

    int a;

    printf("Masukkan nilai a = ");
    scanf("%d", &a);

    printf("\n");

    if(a >= 0)
        printf("Nilai tersebut merupakan bilangan positif\n");
    else
        printf("Nilai tersebut merupakan bilangan negatif\n");
}
