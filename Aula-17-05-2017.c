// Lista Duplamente Encadeada

#include <stdio.h>
#include <stdlib.h>

void insere();
void removePosicao();

int main (){
    struct no{
        int dado;
        struct no *prox;
        struct no *ant;
    };
    struct no *lista = NULL;

    insere(12);

}


void insere(int valor){
    struct no *atual;
    struct no *anterior;
    struct no *aux;

    atual = lista;
    anterior = NULL;
    aux = new(struct no);
    aux -> dado = valor;
    while(atual!=NULL && atual -> dado < valor){
    anterior = atual;
    atual = atual -> prox;
    }
    aux -> prox = atual;
    if(atual!=NULL){
        atual -> ant = aux;
    }
    aux->ant = anterior;
    if(anterior!=NULL)
        anterior->prox=aux;
    } else lista=aux;
}

void removePosicao(int posicao){
    struct no *atual;
    struct no *aux;
    int cont = 0;
    atual = lista;
    while(atual != NULL && cont < posicao){
        cont++;
        atual = atual -> prox;
    }
    if(atual == NULL || posicao <0){
        printf("Erro!");
        return;
    }
    if(atual -> prox != NULL){
        auxiliar = atual -> prox;                      // atual -> prox -> anterior
        auxiliar -> anterior = atual -> anterior;      //
    }
    if(atual -> anterior != NULL)
        auxiliar = atual -> anterior;
        auxiliar -> prox = atual -> prox;
    } else lista = lista -> prox;
    delete (atual);
}
