#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("---------------------------------- PENJUALAN TIKET BY ONE (DEK) GET ONE ----------------------------------\n\n");

    int jumlah_tiket, tiket, sisa;

    float total_harga, harga_normal;

    harga_normal = 50000;

    printf("Beli berapa tiket? =");
    scanf("%d", &jumlah_tiket);
    printf("\n\n");

    tiket = jumlah_tiket / 3;           //jm3
    sisa = jumlah_tiket % 3;     //sm3

    total_harga = tiket * (2 * harga_normal) + sisa * harga_normal;

    printf("Total tiket yang dibeli = %d (Harga normal 50000)\n\n", jumlah_tiket);
    printf("Tiket normal = %d\n\n", sisa);
    printf("Tiket Bonus = %d\n\n", tiket);

    printf("\n");
    printf("---------- !!!!!!! ---------- \n\n");
    printf("Harga yang harus kamu bayar = %.0f \n", total_harga);



    return 0;
}
