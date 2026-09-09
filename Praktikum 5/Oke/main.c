#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Pembagian dua bilangan ----------- \n\n");

    int bil_1, bil_2;
    float hasil;

    printf("Masukkan bilangan pertama = ");
    scanf("%d", &bil_1);

    printf("Masukkan bilangan kedua = ");
    scanf("%d", &bil_2);

    printf("\n");

    if(bil_2 == 0)
        printf("Kesalahan: pembagian dengan nol (division by zero) tidak dapat dilakukan \n");
    else
    {
        hasil = (float)bil_1 / bil_2; //perhitungan
        printf("Hasil bagi %d dengan %d = %.3f \n", bil_1, bil_2, hasil);
    }
}
