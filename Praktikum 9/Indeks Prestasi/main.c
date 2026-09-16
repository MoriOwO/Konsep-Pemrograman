#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Indeks Prestasi --------------- \n\n");

    char huruf;
    int jam;
    int bobot;
    float total_bobot = 0;
    int total_jam = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Nilai Mata Kuliah %d : ", i);
        scanf(" %c", &huruf);

        printf("Jumlah jam Mata Kuliah %d : ", i);
        scanf("%d", &jam);

        switch (huruf) {
            case 'A':
                bobot = 4;
                break;
            case 'B':
                bobot = 3;
                break;
            case 'C':
                bobot = 2;
                break;
            case 'D':
                bobot = 1;
                break;
            case 'E':
                bobot = 0;
                break;
            default:
                bobot = 0;
                printf("Huruf tidak valid, dianggap 0\n");
        }

        total_bobot += (bobot * jam);
        total_jam += jam;
    }

    float ips = total_bobot / total_jam;

    printf("\nIndeks Prestasi Semester : %.0f\n", ips);

    return 0;
}
