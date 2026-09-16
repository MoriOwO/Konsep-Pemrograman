#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Hari-hari --------------- \n\n");

    int hari;

    printf("Pilihlah hari dibawah ini: \n\n1.Minggu\n2.Senin\n3.Selasa\n4.Rabu\n5.Kamis\n6.Jumat\n7.Sabtu\n\n");
    printf("Silahkan untuk memilih: ");
    scanf("%d", &hari);

    printf("\n");

    switch (hari) {
    case 1:
        printf("Kamu memilih hari Minggu! \n");
        break;
    case 2:
        printf("Kamu memilih hari Senin! \n");
        break;
    case 3:
        printf("Kamu memilih hari Selasa! \n");
        break;
    case 4:
        printf("Kamu memilih hari Rabu! \n");
        break;
    case 5:
        printf("Kamu memilih hari Kamis! \n");
        break;
    case 6:
        printf("Kamu memilih hari Jumat! \n");
        break;
    case 7:
        printf("Kamu memilih hari Sabtu! \n");
    default:
        printf("Hari tidak valid!");
    }
    return 0;
}
