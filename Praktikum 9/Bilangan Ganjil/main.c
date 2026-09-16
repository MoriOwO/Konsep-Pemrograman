#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Bilangan Ganjil --------------- \n\n");

    int n, m;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    printf("Hasil: ");
    for (m = 1;m <= ( 2 * n - 1 ); m += 2) {
        printf("%d", m);
        if (m != (2 * n - 1)) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
