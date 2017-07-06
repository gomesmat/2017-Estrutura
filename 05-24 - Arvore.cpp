#include <stdio.h>
#include <stdlib.h>

struct no{
    int dado;
    struct no *esq;
    struct no *dir;
};
struct no *raiz = NULL;

void insereArvore(int valor){
    struct no *atual;
    struct no *anterior;
    struct no *aux;

    aux = new(struct no);
    aux -> dado = valor;
    aux -> esq = NULL;
    aux -> dir = NULL;

    if (raiz == NULL){
        raiz = aux;
        return;
    }

    atual = raiz;

    while(atual != NULL){
        anterior = atual;
        if(valor < atual -> dado) atual = atual -> esq;
        else atual = atual -> dir;
    }

    if (valor < anterior -> esq = aux) anterior -> esq = aux;
    else anterior -> dir = aux;
}

void emOrdem (struct no *atual){
    if(atual != NULL){
        emOrdem(atual -> esq);
        printf("%d\n", atual -> dado);
        emOrdem(atual -> dir);
    }
}

void busca(int valor){

}

int main (){
    insereArvore(8);
    insereArvore(10);
    insereArvore(5);
    insereArvore(7);
    insereArvore(20);


}
    struct no *aux;

    aux = new (struct no);
    aux -> dado = valor;
    aux -> esq = NULL;
    aux -> dir = NULL;

    if (raiz == NULL){
        raiz = aux;
        return;
    }

    atual = raiz;

    while(atual != NULL){
        anterior = atual;
        if(valor < atual -> dado) atual = atual -> esq;
        else atual = atual -> dir;
    }

    if (valor < anterior -> dado) anterior -> esq = aux;
    else anterior -> dir = aux;
}

void emOrdem (struct no *atual){
    if(atual != NULL){
        emOrdem(atual -> esq);
        printf("%d\n", atual -> dado);
        emOrdem(atual -> dir);
    }
}

void busca(int valor){
     struct no *atual;
     atual = raiz;
     while (atual != NULL){
           //if
           //if
     }
     printf("Nao achei!");
}

int main (){
    insereArvore(8);
    insereArvore(10);
    insereArvore(5);
    insereArvore(7);
    insereArvore(20);



}
