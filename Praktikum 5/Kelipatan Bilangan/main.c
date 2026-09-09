#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Kelipatan Bilangan ----------- \n\n");

    int bil_1, bil_2, hasil;

    printf("Masukkan bilangan pertama = ");
    scanf("%d", &bil_1);

    printf("Masukkan bilangan kedua = ");
    scanf("%d", &bil_2);

    hasil = bil_1 % bil_2; //perhitungan

    printf("\n");

    if(hasil == 0)
        printf("Bilangan %d merupakan kelipatan persekutuan dari %d \n", bil_1, bil_2);
    else
        printf("Bilangan %d bukan merupakan kelipatan persekutuan dari %d \n", bil_1, bil_2);
}
