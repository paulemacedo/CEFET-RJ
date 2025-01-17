#include <iostream>
using namespace std;
struct no {
  int info;
  struct no *esq, *dir;
};
typedef struct no *noPtr;
int menu();
int listarNos();
void inserir(noPtr *, int);
void remover(noPtr *, int);
bool buscar(noPtr, int);
noPtr maior(noPtr *);
void listarEmOrdem(noPtr);
void listarPreOrdem(noPtr);
void listarPosOrdem(noPtr);
bool enderecoVazio(noPtr);

int menu() {
  int opcao;
  cout << "\n\n\n---- Menu Principal ----\n\n"
       << "\n1.Inserir no na arvore"
       << "\n2.Remover no na arvore"
       << "\n3.Listar todos os nos da arvore"
       << "\n4.Buscar no"
       << "\n0.Sair"
       << "\nDigite uma opcao: ";
  cin >> opcao;
  return opcao;
}

int listarNos() {
  int opcao;
  cout << "\n\nTipos de listagem:"
       << "\n1.Em Ordem"
       << "\n2.Pre Ordem"
       << "\n3.Pos Ordem"
       << "\n\nEscolha o tipo de listagem: ";
  cin >> opcao;
  return opcao;
}

void inserir(noPtr *p, int x) {
  if (enderecoVazio(*p)) {
    *p = new no;
    (*p)->info = x;
    (*p)->esq = NULL;
    (*p)->dir = NULL;
  } else {
    if (x < ((*p)->info))
      inserir(&((*p)->esq), x);
    else
      inserir(&((*p)->dir), x);
  }
}

void remover(noPtr *p, int x) {
  noPtr aux;
  if (!enderecoVazio(*p)) {
    if (x == ((*p)->info)) {
      aux = *p;
      if (((*p)->esq) == NULL)
        *p = (*p)->dir;
      else if (((*p)->dir) == NULL)
        *p = (*p)->esq;
      else {
        aux = maior(&((*p)->esq));
        (*p)->info = aux->info;
      }
      delete (aux);
      cout << "\nO elemento foi removido\n";
    } else // x != (*p)->info
      if ((x < ((*p)->info)))
        remover(&((*p)->esq), x);
      else
        remover(&((*p)->dir), x);
  }
}

// buscar com problema
// fazer chines
bool buscar(noPtr p, int x) {
  bool achei = false;
  if (enderecoVazio(p))
    cout << "\nArvore nao possui elementos" << endl;
  else {
    if (x == (p->info)) {
      cout << "\nO elemento: " << p->info << " foi encontrado!\n";
      achei = true;
    } else if (x < (p->info))
      buscar((p->esq), x);
    else
      buscar((p->dir), x);
  }
  return achei;
}

// verificar maior elemento da subárvore à esquerda.
noPtr maior(noPtr *p) {
  noPtr t;
  t = *p;
  if ((t->dir) == NULL) {
    *p = (*p)->esq;
    return (t);
  } else
    return (maior(&((*p)->dir)));
}

void listarEmOrdem(noPtr p) {
  if (!enderecoVazio(p)) {
    listarEmOrdem(p->esq);
    cout << "\t" << p->info;
    listarEmOrdem(p->dir);
  }
}

void listarPreOrdem(noPtr p) {
  if (!enderecoVazio(p)) {
    cout << "\t" << p->info;
    listarPreOrdem(p->esq);
    listarPreOrdem(p->dir);
  }
}

void listarPosOrdem(noPtr p) {
  if (!enderecoVazio(p)) {
    listarPosOrdem(p->esq);
    listarPosOrdem(p->dir);
    cout << "\t" << p->info;
  }
}

bool enderecoVazio(noPtr p) {
  if (p)
    return false;
  else
    return true;
}

int main() {
  int op1, op2, x;
  bool achei;
  noPtr raiz = NULL;

  do {
    op1 = menu();
    switch (op1) {
    case 1:
      cout << "\nElemento a inserir: ";
      cin >> x;
      inserir(&raiz, x);
      break;
    case 2:
      cout << "\nElemento para remover: ";
      cin >> x;
      remover(&raiz, x);
      break;
    case 3:
      op2 = listarNos();
      if (op2 == 1)
        listarEmOrdem(raiz);
      if (op2 == 2)
        listarPreOrdem(raiz);
      if (op2 == 3)
        listarPosOrdem(raiz);
      break;
    case 4:
      cout << "\nElemento para buscar: ";
      cin >> x;
      achei = buscar(raiz, x);
      if (!achei)
        cout << "Elemento nao encontrado";
    }
  } while (op1 != 0);
}