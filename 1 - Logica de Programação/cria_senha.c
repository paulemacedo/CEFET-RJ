#include <stdio.h>

int criaNumero(int x, int y)
{
    return (x*100)+y;
}

int main()
{
    int dia, mes, ano, num1, num2, senha;
    
    printf  ("\ndigite o dia de nascimento do aluno");
    scanf ("%d", &dia);
    printf  ("\ndigite o mes de nascimento do aluno");
    scanf ("%d", &mes);
    printf  ("\ndigite o ano de nascimento do aluno");
    scanf ("%d", &ano);

    num1 = criaNumero(mes,dia);
    num2 = criaNumero(dia,mes);
    senha = num1 + num2 + ano;

    printf ("\nsenha inicial: %d", senha);
    return 0;
}