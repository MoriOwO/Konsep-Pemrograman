#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("----------- Wujud Benda Berdasarkan Suhu ----------- \n\n");

    float suhu;

    printf("Masukkan nilai suhu = ");
    scanf("%f", &suhu);

    printf("\n");

    if(suhu < 0)
        printf("Benda berbentuk padat \n");
    else if(suhu >= 0 && suhu <= 100)
        printf("Benda berbentuk cair \n");
    else
        printf("Benda berbentuk gas \n");
}
