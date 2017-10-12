#include <iostream>
using namespace std;

#define TAM 10

int vetor[TAM], pos;

void inicializa(){
    for(pos = 0; pos < TAM; pos++){
        vetor[pos] = -1;
    }
}

int espalha(int chave){
    return chave%TAM;
}

int reespalha(int pos){
    return (pos + 1)%TAM;
}

void insere(int chave){
     int pos, cont;
     cont = 0;
     pos = espalha(chave);
     if(vetor[pos] == -1){
         vetor[pos] = chave;
         cout << "Inseriu" << endl;
         return;
     }
     else{
        pos = reespalha(pos);
        while(vetor[pos] != -1  && cont < TAM){
            pos = reespalha(pos);
            cont = cont + 1;
            cout << "Reespalha" << endl;
        }
        if(cont >= TAM){
            cout << "Voce nao pode mais inserir nenhum elemento" << endl;
        } else {
            vetor[pos] = chave;
            cout << "Inseriu" << endl;
            return;
        }
     }
}

void busca(int chave){
    pos = espalha(chave);
    if(vetor[pos] == chave){
        cout << "Achou!" << endl;
        return;
    }
    if(vetor[pos] == -1){
        cout << "O elemento buscado nao existe" << endl;
        return;
    }
    pos = reespalha(pos);
    while(vetor[pos] != -1  && cont < TAM){
        pos = reespalha(pos);
        cont = cont + 1;
        cout << "Reespalha" << endl;
    }
    if(cont >= TAM){
        cout << "O elemento buscado nao existe" << endl;
    }
}

void imprime(){
    for(pos = 0; pos < TAM; pos++){
        cout << vetor[pos] << endl;
    }
}

int main(){
    inicializa();
    insere(252);
    insere(1522);
    insere(13);
    insere(44);
    insere(1026);
    insere(89);
    insere(259);
    insere(2000);
    insere(16);
    insere(27);
    imprime();
    return 0;
}
