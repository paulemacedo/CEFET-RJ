#include <iostream>
#include "Bubble.cpp"

using namespace std;

void printArray(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int list[10];
    int size = sizeof(list) / sizeof(list[0]);

    cout << "Digite 10 numeros\n";
    for (int i = 0; i < size; i++) {
        cin >> list[i];
    }

    bubblesort(list, size);

    cout << "\nArray Ordenado com bubble: ";
    printArray(list, size);

    return 0;
}