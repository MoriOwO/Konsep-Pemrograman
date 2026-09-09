#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Pembagian dua bilangan ----------- \n\n");

    float hasil, bil_1, bil_2;

    printf("Masukkan bilangan pertama = ");
    scanf("%f", &bil_1);

    printf("Masukkan bilangan kedua = ");
    scanf("%f", &bil_2);

    printf("\n");

    if(bil_2 == 0)
        printf("Kesalahan: pembagian dengan nol (division by zero) tidak dapat dilakukan \n");
    else
    {
        hasil = bil_1 / bil_2; //perhitungan
        printf("Hasil bagi %.0f dengan %.0f = %.3f \n", bil_1, bil_2, hasil);
    }
}
