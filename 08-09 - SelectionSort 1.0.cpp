#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 20

int vetor[tam];

void gera(){
	int i;
	srand (time(NULL));
	for(i=0; i<tam; i++) vetor[i] = rand();
}

void selectionSort(){
	int aux;
	int current = 0;
	
	for(int i=0; i <= tam-2; i++){
		current = i;
		for(int k = i+1; k <= tam-1; k++){
			if (vetor[current] > vetor[k]) current = k;
		}
		aux = vetor[i];
		vetor[i] = vetor[current];
		vetor[current] = aux;
	}
}


void imprime(){
	for(int i=0; i<tam; i++){
		printf("%d\n", vetor[i]);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	clock_t tempo1, tempo2;
	gera();
	printf("Vetor original:\n\n");
	imprime();
	printf("\n========================\n\n");
	tempo1 = clock();
	selectionSort();
	tempo2 = clock() - tempo1;
	printf("Vetor ordenado:\n\n");
	imprime();
	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}
