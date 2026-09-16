#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Program Gaje --------------- \n\n");

    int input, m;

    printf("Masukkan angka: ");
    scanf("%d", &input);

    printf("\n");

    printf("Hasil: ");
    for(m = 1;m <= input; m++) {
        if(m % 2 == 0) {
            printf("-%d", m);
        } else {
            printf("%d", m);
        }

        if(m != input) {
            printf(" ");
        }

    }
    printf("\n");
    return 0;
}
