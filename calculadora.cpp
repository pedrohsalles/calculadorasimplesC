#include <stdio.h>
#include <conio.h>

float soma(float a, float b)
{
    float soma;
    soma = a + b;
    return (soma);
}

float subtracao(float a, float b)
{
    float sub;
    sub = a - b;
    return (sub);
}

float multiplicacao(float a, float b)
{
    float mult;
    mult = a * b;
    return (mult);
}

float divisao(float a, float b)
{
    float div;
    div = a / b;
    return (div);
}

int main()
{
    float a, b;
    int menu;

    printf("\n\t 1 SOMA \n\t 2 SUBTRACAO \n\t 3 MULTIPLICACAO \n\t 4 DIVISAO: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &a);
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &b);
        printf("\n A soma e: %.2f \n", soma(a, b));
        break;

    case 2:
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &a);
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &b);
        printf("\n A subtracao e: %.2f \n", subtracao(a, b));
        break;
    case 3:
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &a);
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &b);
        printf("\n A multiplicacao e: %.2f \n", multiplicacao(a, b));
        break;
    case 4:
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &a);
        printf("\nDIGITE UM NUMERO: ");
        scanf("%f", &b);
        printf("\n A divisao e: %.2f \n", divisao(a, b));
        break;

    default:
        printf("\nOpcao invalida: \n");
        break;
    }
  getch();
    return (0);
}