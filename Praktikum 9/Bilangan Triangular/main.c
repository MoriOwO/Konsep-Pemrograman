#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Bilangan Triangular --------------- \n\n");

    int i, total;

    printf("Hasil dari Bilangan Triangular: ");

    printf("\n\n");

    for (i = 7;i >= 1;i -= 1) {
        total += i;
        printf("%d", i); {

        printf(" + ");

        }
    }
    printf("= %d\n", total);

    return 0;
}
