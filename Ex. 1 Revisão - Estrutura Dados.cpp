/*                                        Revisão: Lista de exercícios com vetores                                                                                         panqueca

1. Escreva  um  programa  no  qual  o  usuário  digite 5 números  inteiros que serão armazenados em um vetor. Sobre esse vetor:

a. Imprima em  ordem  direta  (do  elemento  na  posição  0  até  o elemento na posição 4)
b. Imprima em  ordem  inversa  (do  elemento  na  posição  4 até  o elemento na posição 0)
c. Procure o maior elemento do vetor
d. Procure o menor elemento do vetor
e. Calcule a média entre os 10 valores   

*/


#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

const int tam=5;

int main(){
	
	setlocale(LC_ALL, ""); //setlocale(LC_ALL, "Portuguese");
	
  	int i, vetor[tam];
  	int media = 0, soma = 0;
  	int maior = 0, menor = vetor[0];
	
	printf(" Digite 5 valores:\n");
	for(i=0;i<tam;i++){
		cout << "\n> ";		//printf("\n> ");
		cin >> vetor[i];	//scanf("%d", &vetor[i]);
	}
	
	printf("\n\n Ordem direta:\n  ");
	for(i=0; i<tam; i++){
		cout << vetor[i]; 	//printf("%d", vetor[i]);
		cout <<";  ";	//printf(";  ");
	}
	
	printf("\n\n Ordem inversa:\n  ");
	for(i=tam-1; i>=0; i--){
		cout << vetor[i]; 	//printf("%d", vetor[i]);
		cout <<";  ";	//printf(";  ");
	}

    fflush(stdin); 
    fflush(stdout);
    
	for (i=0; i<tam; i++){
		if (vetor[i] > maior) maior = vetor[i];
	}
	menor = vetor[0];
	
	for (i=0; i<tam; i++){
		if (vetor[i] < menor) menor = vetor[i];
	}
	
	cout << "\n\n Maior valor: " << maior;
	cout << "\n\n Menor valor: " << menor;
	
	for (i=0; i<tam; i++){
		soma = soma + vetor[i];
	}
	media = soma/tam;
	
	cout << "\n\n Média: " << media << "\n\n ";
	
	system("pause");
	return 0;
}

