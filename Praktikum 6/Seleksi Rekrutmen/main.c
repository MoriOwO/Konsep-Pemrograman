#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Seleksi Rekrutmen Karyawan ----------- \n\n");

    float akademik, keterampilan, psikologi, lulus;

    printf("Masukkan nilai Tes Akademik = ");
    scanf("%f", &akademik);

    printf("Masukkan nilai Tes Keterampilan = ");
    scanf("%f", &keterampilan);

    printf("Masukkan nilai Tes Psikologi = ");
    scanf("%f", &psikologi);

    lulus = ( akademik + keterampilan + psikologi ) / 3;

    printf("\n");

    if(lulus >= 75)
    {
        if( akademik > keterampilan || akademik > psikologi )
            printf("Selamat kamu diterima di Departemen Administrasi \n");

        else if( keterampilan > akademik && keterampilan > psikologi )
            printf("Selamat kamu diterima di Departemen Produksi \n");

        else
            printf("Selamat kamu diterima di Departemen Pemasaran \n");
    }
    else
        printf("Maaf tetapi kamu belum lulus tes, tetap semangat ya! \n");
}
