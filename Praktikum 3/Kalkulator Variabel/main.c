#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12, b = 2, c = 3, d = 4;

    printf("-------------- OPERASI ARITMATIKA -------------- \n");
    printf("\n");

    printf("Sisa pembagian %d dan %d = %d\n", a, b, a%b);
    printf("\n");
    printf("Pengurangan %d dan %d = %d\n", a, c, a-c);
    printf("\n");
    printf("Penjumlahan %d dan %d = %d\n", a, b, a+b);
    printf("\n");
    printf("Pembagian %d dan %d = %d\n", a, d, a/d);
    printf("\n");
    printf("!!!-----------------------------!!!\n");
    printf("\n");
    printf("Soal 1 = %d : %d x %d + %d mod %d adalah %d\n", a, d, d, a, d, a/d*d+a%d);
    printf("\n");
    printf("Soal 2 = %d mod %d : %d x %d - %d adalah %d\n", a, d, d, a, c, a%d/d*a-c);

    return 0;
}
