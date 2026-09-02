#include <stdio.h>
#include <stdlib.h>

int main()
{
    //

    printf("-------------- MENGHITUNG DISKRIMINAN -------------- \n");
    printf("\n");

    int a, b, c, hasil;

    printf("Disini kita akan menghitung diskriminan!\n");
    printf("-----\n");
    printf("[Rumus] b^2 - 4ac \n");
    printf("\n");
    printf("Masukkan nilai a =");
    scanf("%d", &a);
    printf("Masukkan nilai b =");
    scanf("%d", &b);
    printf("Masukkan nilai c =");
    scanf("%d", &c);

    hasil = b * b - 4 * a * c;

    printf("\n");
    printf("Hasil Diskriminannya adalah %d\n", hasil);
    printf("\n");

    return 0;

}
