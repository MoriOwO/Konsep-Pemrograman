#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Urutan Huruf --------------- \n\n");

    char c;

    for (c = 'Z'; c >= 'A'; c--) {
        printf("%c", c); {
        printf(" ");
        }
    } printf("\n");

    return 0;
}
