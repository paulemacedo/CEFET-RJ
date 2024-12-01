#include <stdio.h>


void descobre (int qtddias)
{
    int semanas, dias;
    semanas  = qtddias / 7;
    dias = qtddias % 7;
    printf("\n%d semanas e %d dias", semanas, dias);
}


int main(){
    int qtddias;
    printf("Digite a quantidade de dias: ");
    scanf ("%d", &qtddias);
    descobre(qtddias);

    return 0;
}