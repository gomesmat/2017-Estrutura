#include <iostream>
#include <cstdio>
#include <locale.h>


using namespace std;

template <typename t>
t quadrado(t valor){
    return valor*valor;
}
// t ser� usado como uma fun��o do mesmo tipo do par�metro.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero = 5;
    double numeroD = 5.5;

    cout << "Quadrado de " << numero << " � " << quadrado(numero) << endl;
    cout << "Quadrado de " << numero << " � " << quadrado(numeroD) << endl;

    return 0;
}
