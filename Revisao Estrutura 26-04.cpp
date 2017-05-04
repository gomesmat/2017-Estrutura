#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct no{
    int dado;
    struct no *prox;
};d

struct no *lista = NULL;

void insereLista(int valor){
    struct no *atual;
    struct no *anterior;
    struct no *aux;
    atual = lista;
    while(atual!=NULL && atual -> dado < valor){
        anterior = atual;
        atual = atual -> prox;
    }
    aux = new(struct no);
    aux -> dado = valor;
    if(atual == lista){
        aux -> prox = atual;
        lista = aux;
    } else {
        aux -> prox = atual;
        anterior -> prox = aux;
    }
}

int main(){
        insereLista(10);
        return 0;
}
