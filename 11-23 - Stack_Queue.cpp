#include <iostream>
#include <cstdio>
#include <locale.h>
#include <stack> // pilha
#include <queue> // fila
//#include <queue> // fila de prioridade

using namespace std;

queue<int> fila;
stack<int> pilha;
priority_queue<int> ppilha;

void mostrarEstruturas(){
    cout << "A frente da fila é " << fila.front() << ", com o tamanho de " << fila.size() << " elementos." << endl;
    cout << "O topo da pilha é " << pilha.top() << ", com o tamanho de " << pilha.size() << " elementos." << endl;
    cout << "O topo da pilha de prioridade é " << ppilha.top() << ", com o tamanho de " << ppilha.size() << " elementos." << endl;
    cout << endl;
}

void remove2(){
    for (int i=0; i<2; i++){
        fila.pop();
        pilha.pop();
        ppilha.pop();
    }
}

void verifica(){
    if(fila.empty()) cout << "A fila está vazia." << endl;
    else cout << "A frente da fila é " << fila.front() << ", com o tamanho de " << fila.size() << " elementos." << endl;


    if(pilha.empty()) cout << "A pilha está vazia." << endl;
    else cout << "O topo da pilha é " << pilha.top() << ", com o tamanho de " << pilha.size() << " elementos." << endl;


    if(ppilha.empty()) cout << "A pilha de prioridade está vazia." << endl;
    else cout << "O topo da pilha de prioridade é " << ppilha.top() << ", com o tamanho de " << ppilha.size() << " elementos." << endl;

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    fila.push(10);
    fila.push(100);
    fila.push(50);
    fila.push(20);

    pilha.push(10);
    pilha.push(100);
    pilha.push(50);
    pilha.push(20);

    ppilha.push(10);
    ppilha.push(100);
    ppilha.push(50);
    ppilha.push(20);

    verifica();

    remove2();

    verifica();

    remove2();

    verifica();

    return 0;
}
