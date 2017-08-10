#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 5000000

int vetor[tam];
int tamHeap = 0;

void gera(){
	int i;
	srand (time(NULL));
	for(i=0; i<tam; i++) vetor[i] = rand();
}

int partition(int p, int r){
	int piv, aux;
	piv = vetor[p];
	i = p - 1;
	j = r + 1;
	while(true){
		j--;
		while(vetor[j] > piv){
			i++;
		}
		while(vetor[i] < piv){
			if (i < j) {
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			} else return j;
		}
	}
}

void quickSort(int p, int r){
	if(p < r){
		q = partition(p, q);
		quickSort(p, q);
		quickSort(q+1, r);
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
	heapSort();
	tempo2 = clock() - tempo1;
	printf("Vetor ordenado:\n\n");
	imprime();
	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}
