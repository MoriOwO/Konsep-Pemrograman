#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Bilangan Prima --------------- \n\n");

    int n, i;
    int prima = 1; // anggap dulu prima, nanti dibuktikan salah kalau ada faktor lain

    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n <= 1) {
        prima = 0; // 0 dan 1 bukan bilangan prima
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prima = 0; // ketemu faktor selain 1 dan n -> bukan prima
                break;
            }
        }
    }

    if (prima == 1) {
        printf("Bilangan adalah bilangan prima\n");
    } else {
        printf("Bilangan bukan bilangan prima\n");
    }

    return 0;
}
