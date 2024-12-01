#include <iostream>
using namespace std;

int menu(){
    int op;

    cout << "\n\n\n---- Menu Principal ----\n\n"
        << "\n1.Soma"
        << "\n2.Subtrai"
        << "\n3.multiplica"
        << "\n4.divide"
        << "\n0.Sair"
        << "\nDigite uma opcao: ";

    cin >> op;
    return op;
}


int main(){
    int a=0,b=0,c=0;
    int op1;

    do {
        
        op1 = menu();
        switch (op1) {
        case 1:
            cout << "digite os dois numeros\n";
            cin >> a;
            cin >> b;
            c=a+b;
            cout << "\no resultado da soma e: " << c << "\n";
            break;
        case 2:
            cout << "digite os dois numeros\n";
            cin >> a;
            cin >> b;
            c=a-b;
            cout << "\no resultado da subtracao e: " << c << "\n";
            break;
        case 3:
            cout << "digite os dois numeros\n";
            cin >> a;
            cin >> b;
            c=a*b;
            cout << "\no resultado da Multiplicacao e: " << c << "\n";
            break;
        case 4:
        cout << "digite os dois numeros\n";
            cin >> a;
            cin >> b;
            c=a/b;
            cout << "\no resultado da divisao e: " << c << "\n";
        }
        
    } while (op1 != 0);

return 0;
}