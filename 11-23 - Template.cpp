#include <iostream>
#include <cstdio>
#include <locale.h>


using namespace std;

template <typename t>
t quadrado(t valor){
    return valor*valor;
}
// t será usado como uma função do mesmo tipo do parâmetro.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero = 5;
    double numeroD = 5.5;

    cout << "Quadrado de " << numero << " é " << quadrado(numero) << endl;
    cout << "Quadrado de " << numero << " é " << quadrado(numeroD) << endl;

    return 0;
}
