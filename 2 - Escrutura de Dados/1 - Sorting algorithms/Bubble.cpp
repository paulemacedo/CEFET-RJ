#include <iostream>
using namespace std;

/*
    O primeiro elemento é comparado com cada elemento no array. É feita a troca
entre os elementos quando a ordem buscada (crescente ou decrescente) é 
encontrada. 

Após o primeiro elemento ser comparado com todos os outros e sendo realizada as 
trocas necessárias, então, na primeira posição estará armazenado o valor 
pretendido (menor, se for crescente ou maior, se for decrescente). 

Faz-se o mesmo processo com o segundo elemento, depois com o terceiro e assim
sucessivamente até que o array esteja corretamente ordenado

*/

void bubblesort (int A[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
            
        }
        
    }

}

int main ()
{

int x;
int list[10];
int size = sizeof(list) / sizeof(list[0]);

cout << "Digite 10 numeros\n";
for (int i = 0; i < size; i++)
{
    cin >> list[i];
}

bubblesort(list, size);

cout << "\nArray Ordenado com bubble: ";
for (int i = 0; i < 10; i++) {
    cout << list[i] << " ";
}
}