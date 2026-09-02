#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gaji_pokok, jumlah_anak, hari_masuk, masa_kerja;

    float tunjangan_bocil, tunjangan_istri, thr, pajak, bantuan_transport;
    float polis_asuransi = 20000;
    float total_pendapatan;

    printf("---------------------------------- HASIL PENDAPATAN ----------------------------------\n\n");

    printf("Kali ini kita akan menghitung pendapatan WNI yang tertindas oleh kaum pejabat!\n\n");

    printf("Masukkan gaji pokok =");
    scanf("%d", &gaji_pokok);
    printf("\n");
    printf("Masukkan jumlah anak =");
    scanf("%d", &jumlah_anak);
    printf("\n");
    printf("Masukkan masa kerja (tahun) =");
    scanf("%d", &masa_kerja);
    printf("\n");
    printf("Masukkan hari masuk =");
    scanf("%d", &hari_masuk);
    printf("\n");

    //PROSES

    tunjangan_istri = 0.1 * gaji_pokok;
    tunjangan_bocil = 0.05 * gaji_pokok * jumlah_anak;
    thr = 5000 * masa_kerja;
    pajak = 0.15 * (gaji_pokok + tunjangan_istri + tunjangan_bocil);
    bantuan_transport = 3000 * hari_masuk;

    total_pendapatan = gaji_pokok + tunjangan_istri + tunjangan_bocil + thr - pajak + bantuan_transport - polis_asuransi;

    //OUTPUT

    printf("\n");
    printf("---------------- INI HASILNYA :D ---------------- \n\n");

    printf("Tunjangan Istri = %.0f\n\n", tunjangan_istri);
    printf("Tunjangan Bocil = %.0f\n\n", tunjangan_bocil);
    printf("Tunjangan Hari Raya = %.0f\n\n", thr);
    printf("Pajak = %.0f\n\n", pajak);
    printf("Bantuan Transport = %.0f\n\n", bantuan_transport);
    printf("Polis Asuransi = %.0f\n\n", polis_asuransi);

    printf("!!!!!!!!\n\n");
    printf("Hasil pendapatan kamu setelah semua gonjang-ganjing itu = %.0f", total_pendapatan);
    printf("\n");

    return 0;
}
