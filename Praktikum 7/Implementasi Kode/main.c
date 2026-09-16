#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------- Implementasi Kode --------------- \n\n");

    int valid_operator = 1;
    char operator;
    float number1, number2, result;

    printf("Masukkan 2 buah bilangan & sebuah operator (pembagian, perkalian, penjumlahan, pengurangan)\n");
    printf("dengan format : number1 operator number2\n\n");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    default:
        valid_operator = 0;
    }

    if(valid_operator)
    printf("\n%g %c %g is %g\n", number1, operator, number2, result );
    else
    printf("Invalid operator!\n");

    return 0;
}
