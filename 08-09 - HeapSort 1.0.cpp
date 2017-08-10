#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 700

int vetor[tam], vetorOld[tam];
int tamHeap = 0;

void gera(){
	int i;
	srand (time(NULL));
	for(i=0; i<tam; i++) vetor[i] = rand();
	for(i=0; i<tam; i++) vetorOld[i] = vetor[i];
}

void heapify(int i){
	int max, aux;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if(l < tamHeap && vetor[l] > vetor[i]) max = l;
		else max = i;
	if(r < tamHeap && vetor[r] > vetor[max]) max = r;
	if(max!=i){
		aux = vetor[i];
		vetor[i] = vetor[max];
		vetor[max] = aux;
		heapify(max);
	}
}

void buildHeap(){
	tamHeap = tam;
	for(int j = (tam/2) - 1; j >= 0; j--){
		heapify(j);
	}
}

void heapSort(){
	int aux;
	buildHeap();
	for(int k = tam - 1; k >= 1; k--){
		aux = vetor[0];
		vetor[0] = vetor[k];
		vetor[k] = aux;
		tamHeap--;
		heapify(0);
	}
}


void imprime(){
	for(int i=0; i<tam; i++){
		printf(" %d\t  ||   %d\n", vetorOld[i], vetor[i]);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	clock_t tempo1, tempo2;
	gera();
	
	tempo1 = clock();
	heapSort();
	tempo2 = clock() - tempo1;
	
	printf(" Original ||   Ordenado\n\t  ||\n");
	printf("========================\n");
	imprime();
	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}
