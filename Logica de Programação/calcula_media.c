#include <stdio.h>

float calculaSoma (float num1, float num2)
{
    return num1 + num2;
}

void calculaMedia(float calculaSoma)
{
    float media;
    media = calculaSoma/2;
    printf ("\nmedia:, %2.f", media);
}

int main()
{
    float num1, num2, soma;
    printf("\ndigite dois numeros\n");
    scanf ("%f", &num1);
    scanf ("%f", &num2);
    soma = calculaSoma(num1,num2);
    printf ("\nsoma: %2.f", soma);
    calculaMedia(soma);
    return 0;
}