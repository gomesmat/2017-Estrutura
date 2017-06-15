#include <stdio.h>
#include <stdlib.h>
#define tam 8

struct no{
    int dado;
    int usado;
};

struct no arvore [tam];

void inicia(){
    int i;
    for(i=0; i<tam;i++){
        arvore[i].usado=0
    }
}

void insere(int valor){
    int atual = 0;
    while( atual < tam && arvore [atual].usado!=0){
        if(valor < arvore[atual].dado) atual=2*atual+1;
        else atual = 2*atual+2;
    }
    if(atual < tam){
        arvore[atual].dado = valor;
        arvore[atual].usado = 1;
    } else printf("Não foi possível inserir!");
}

void insereArvoreSemRepetidos (int valor){
    int atual = 0;
    while (atual != NULL){
        if(strcmp(valor, arvore[atual].dado) == 0){
            printf("Não foi possivel inserir.\n Numero repetido!");
            return;
        }
    }
    while( atual < tam && arvore [atual].usado!=0){
        if(valor < arvore[atual].dado) atual=2*atual+1;
        else atual = 2*atual+2;
    }
    if(atual < tam ){
        arvore[atual].dado = valor;
        arvore[atual].usado = 1;
    } else printf("Não foi possível inserir!");
}

void emOrdem(int atual){
    if(atual < tam && arvore [atual].usado!=0){
        emOrdem(2*atual+1);
        printf("%d", arvore[atual].dado);
        emOrdem(2*atual+2);
    }
}

int main(){

    system("pause");
    return 0;
}
