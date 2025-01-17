#include <iostream>

using namespace std;
/*
  * Bubble sort algorithm
  *
  * O Bubble Sort é um algoritmo de ordenação simples que funciona repetidamente
  * percorrendo a lista a ser ordenada, comparando elementos adjacentes e trocando-os 
  * se estiverem na ordem errada. O processo é repetido até que a lista esteja ordenada.
  * 
*/

void bubblesort(int A[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (A[i] > A[j]) {
        int aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
  }
}