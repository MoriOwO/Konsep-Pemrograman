#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Potongan Harga ----------- \n\n");

    float bayar, total, diskon, normal;

    printf("Masukkan nominal pembayaran anda = ");
    scanf("%f", &bayar);

    printf("\n");

    normal = bayar;
    diskon = bayar - (0.5 * bayar);

    if(bayar >= 100000)
    {
        printf("Yey kamu dapet diskon!\n\n");
        printf("Total Belanja = %0.f \n", diskon);
    }
    else
    {
        printf("Yah kamu ga dapet diskon.. \n\n");
        printf("Total Belanja = %0.f \n", normal);
    }
}
