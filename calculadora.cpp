#include <stdio.h>
#include <conio.h>

// função para calcular a soma
float soma(float a, float b)
{
    float soma;
    soma = a + b;
    return (soma);
}

// função  para calcular a subtraçao
float subtracao(float a, float b)
{
    float sub;
    sub = a - b;
    return (sub);
}

// função para calcular a multiplicação
float multiplicacao(float a, float b)
{
    float mult;
    mult = a * b;
    return (mult);
}

// função para calcular a divisão
float divisao(float a, float b)
{
    float div;
    div = a / b;
    return (div);
}
// programa principal
int main()
{
    float a, b;
    int menu;
    
    // Menu
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
    // Segura na tela ate apertar a tecla enter
  getch();
    return (0);
}