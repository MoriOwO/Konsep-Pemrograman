#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Melakukan konversi valuta asing, misalnya mata uang dolar US ke mata uang Rp,
    //dimana satu dolar sama dengan Rp 11.090 ,-

    int usd, idr;

    printf("---------------- MESIN KONVERSI --------------- \n");
    printf("\n");
    printf("Masukkan nominal USD yang ingin dikonversi: ");
    scanf("%d", &usd);

    idr = usd * 11090;

    printf("\n");
    printf("Hasil konversi USD dengan IDR: %d\n", idr);

    return 0;
}
