#include <stdio.h>
#include <stdlib.h>

#define tam 6

void push(int valor){
    if(topo == tam-1){
        print("Pilha cheia!");
        return;
    }
    topo++;
    pilha[topo] = valor;
}

void pop(){
    if(topo == -1){
        print("Erro!");
        return;
    }
    topo--;
    pilha[topo] = valor;
}

void insere(int valor){
    if(contador == tam){
        printf("Vetor lotado!")
        return;
    }
    fila [fim] = valor;
    if(fim == tam-1){
        fim = 0;
        } else { fim++; }
    contador++;
}


void remove(int valor){
    if(contador == 0){
        printf("Erro!")
        return;
    }
    fila [fim] = valor;
    if(inicio == tam-1){
        inicio = 0;
        } else { inicio++; }
    contador--;
}

void imprime(){
    struct no *atual;
    atual = lista;
    while(atual != NULL){
        printf("%d", atual -> dado);
        atual == atual -> prox;
    }
}
