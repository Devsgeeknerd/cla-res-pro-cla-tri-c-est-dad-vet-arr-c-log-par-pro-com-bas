#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Informe o lado A: ");
    scanf("%d", &a);
    printf("Informe o lado B: ");
    scanf("%d", &b);
    printf("Informe o lado C: ");
    scanf("%d", &c);
    if ((a == b) && (b == c))
    {
        printf("O triangulo é equilátero");
    }
    else if ((a != b) && (b != c) && (a != c))
    {
        printf("O triangulo é escaleno");
    }
    else
    {
        printf("O triangulo é isósceles")
    }
    return 0;
}
