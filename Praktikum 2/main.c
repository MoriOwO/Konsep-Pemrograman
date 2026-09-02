#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nrp = 3126600020;
    char nama[] = "Aryabima Pasharizqi Ramadhan";
    char kelas = 'A';

    int x, z, hasil;
    x = 1024;
    z = 4096;
    hasil = x + z;

    int b = 6;
    int c = 7;

    float y = 25.5;
    float tinggi = 162.8;

    int angka;
    char darah;
    char line[] = "------------------[ Terimakasih telah menjawab :D ]------------------";

    printf("Soal 1. \n");
    printf("Nama: %s \n", nama);
    printf("NRP : %.0f \n", nrp);
    printf("Kelas: %c \n", kelas);
    printf("\n");
    printf("Soal 2. \n");
    printf("Jumlah: 1024 + 4096 = %d\n", hasil);
    printf("\n");
    printf("Soal 3. \n");
    printf("Variabel B = 6 \nVariabel C = 7 \n");
    printf("\n");
    printf("Jumlah variabel B dan C = %d\n", b + c);
    printf("\n");
    printf("Soal 4. \n");
    printf("Kalikan angka 25.5 dengan 50 = %f\n", y * 50);
    printf("\n");
    printf("Soal 5. \n");
    printf("Tinggi badan Bima = %f\n", tinggi);
    printf("\n");
    printf("Soal 6. \n");
    printf("Masukkan Umur Anda = ");
    scanf("%d", &angka);
    printf("Masukkan Golongan Darah Anda = ");
    scanf(" %c", &darah);
    printf("\n");
    printf("%s\n", line);
    printf("\n");
    printf("Anda Memasukkan Angka = %d\n", angka);
    printf("Anda Memasukkan Golongan Darah = %c\n", darah);

    return 0;
}
