#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct no {
    char dado[50];
    int contador;
    struct no *esq;
    struct no *dir;
};
struct no *raiz = NULL;

void insereArvore(char *valor){
    struct no *atual;
    struct no *anterior;
    struct no *aux;

    aux = new(struct no);
    strcpy(aux -> dado, valor);
    aux -> esq = NULL;
    aux -> dir = NULL;
    aux -> contador = 1;

    if (raiz == NULL){
        raiz = aux;
        return;
    }

    atual = raiz;

    while(atual != NULL){
        anterior = atual;
        if(strcmp(atual -> dado,valor) == 0) {
                atual -> contador = atual -> contador + 1;
                delete(aux);
                return;
        }
        if(strcmp(valor,atual -> dado) < 0) atual = atual -> esq;
        else atual = atual -> dir;

    }

    if (strcmp(anterior -> dado,valor) > 0) anterior -> esq = aux;
    else anterior -> dir = aux;
}

void busca (char valor[]){

    struct no *atual;
    atual = raiz;
    while (atual != NULL){
        if(strcmp(valor, atual -> dado) == 0){
            printf("Achei!");
            return;
        }
        if(strcmp(valor,atual->dado) < 0) atual = atual -> esq;
        else atual = atual -> dir;
    }
    printf("Não achei!");
}

void emOrdem (struct no *atual){
    if(atual != NULL){
        emOrdem(atual -> esq);
        printf("\n%s | ", atual -> dado);
        printf("%d\n", atual -> contador);
        emOrdem(atual -> dir);
    }
}

int main(){
    int op;
    char auxiliar[50], valor[50];
    FILE *fp;

    fp = fopen("texto.txt","r");
    if (fp == NULL){
        printf("Erro!");
        return 0;
    }

    printf("\n 1- Imprimir a árvore");
    printf("\n 2- Buscar um valor\n\n> ");
    scanf("%d", &op);
    switch(op){
    case 1:
        while(!feof(fp)){
            fscanf(fp, "%s", auxiliar);
            printf("\n%s\n", auxiliar);
            insereArvore(auxiliar);
        }
        emOrdem(raiz);

        break;
    case 2:
        printf("Insira um valor:\n");
        scanf("%d", &valor);
        busca(valor);
        break;
    default : printf("\nOpa, opção invalida!");
    }

    fclose(fp);
    return 0;
}
