#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celcius, fahrenheit, hasil;

    printf("--------------------- KONVERSI SUHU ---------------------\n");
    printf("\n");
    printf("Disini kita akan mengkonversikan suhu C ke suhu F!\n");
    printf("\n");
    printf("Masukkan nominal suhu Celcius =");
    scanf("%f", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("\n");
    printf("Hasil konversi suhu Celcius ke suhu Fahrenheit adalah %.2f", fahrenheit);
    printf("\n");

    return 0;
}
