#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Menentukan banyaknya uang pecahan yang dibutuhkan, urut dari pecahan terbesar
    //(100000,50000,20000,10000,5000,2000,1000)

    printf("-------------- MESIN PECAHAN -------------- \n");
    printf("\n");

    int bayar, sisa, seratus, limapuluh, duapuluh, sepuluh, lima, dua, satu;

    printf("Masukkan pembayaran: ");
    scanf("%d", &bayar);

    sisa = bayar;

    seratus = sisa / 100000;
    sisa = sisa - (seratus * 100000);

    limapuluh = sisa / 50000;
    sisa = sisa - (limapuluh * 50000);

    duapuluh = sisa / 20000;
    sisa = sisa - (duapuluh * 20000);

    sepuluh = sisa / 10000;
    sisa = sisa - (sepuluh * 10000);

    lima = sisa / 5000;
    sisa = sisa - (lima * 5000);

    dua = sisa / 2000;
    sisa = sisa - (dua * 2000);

    satu = sisa / 1000;
    sisa = sisa - (satu * 1000);

    printf("\n");
    printf("Banyak uang pecahan: \n");
    printf("\n");

    if (seratus > 0)   printf("%d Lembar 100000\n", seratus);
    if (limapuluh > 0) printf("%d Lembar 50000\n", limapuluh);
    if (duapuluh > 0) printf("%d Lembar 20000\n", duapuluh);
    if (sepuluh > 0) printf("%d Lembar 10000\n", sepuluh);
    if (lima > 0) printf("%d Lembar 5000\n", lima);
    if (dua > 0) printf("%d Lembar 2000\n", dua);
    if (satu > 0) printf("%d Lembar 1000\n", satu);

    return 0;
}
