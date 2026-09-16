#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Implementasi Kode --------------- \n\n");

    int choice, input, tinggi, hasil;
    float phi;

    printf("Pilihlah Menu Kalkualtor dibawah ini: \n\n1.Menghitung Volume Kubus \n2.Menghitung Luas Lingkaran \n3.Menghitung Volume silinder \n\n");
    printf("Tentukan pilihan anda: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice) {
    case 1:
        printf("Masukkan panjanga sisi kubus: ");
        scanf("%d", &input);

        hasil = input * input * input;

        printf("\n");
        printf("----------------------------------- \n");
        printf("Volume kubus tersebut adalah %d \n", hasil);
        printf("----------------------------------- \n");
        break;
    case 2:
        printf("Masukkan panjang jari-jari lingkaran: ");
        scanf("%d", &input);

        phi = 3.14 * input * input;

        printf("\n");
        printf("----------------------------------- \n");
        printf("Luas lingkaran tersebut adalah %.2f \n", phi);
        printf("----------------------------------- \n");
        break;
    case 3:
        printf("Masukkan panjang jari-jari lingkaran & tinggi silinder: ");
        scanf("%d %d", &input, &tinggi);

        phi = 3.14 * input * input * tinggi;

        printf("\n");
        printf("----------------------------------- \n");
        printf("Volume silinder tersebut adalah %.2f \n", phi);
        printf("----------------------------------- \n");

    }
    return 0;
}
