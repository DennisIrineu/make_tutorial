#include <stdio.h>

void soma(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b)
{
    printf("%d x %d = %d\n", a, b, a * b);
}

void subtrair(int a, int b)
{
    printf("%d - %d = %d\n", a, b, a - b);
}

int main()
{
    printf("Olá, Estudante!\n");
    printf("Abaixo temos alguns cálculos : \n");
    soma(5, 3);
    multiplica(5, 3);
    subtrair(5, 3);
    return 0;
}