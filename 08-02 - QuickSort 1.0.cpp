#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 50

int vetor[tam], vetorOld[tam];

void gera(){
	int i;
	srand (time(NULL));
	for(i=0; i<tam; i++) vetor[i] = rand();
	for(i=0; i<tam; i++) vetorOld[i] = vetor[i];
}

int partitionx(int p, int r){
	int piv, aux;
	piv = vetor[p];
	int i = p - 1;
	int j = r + 1;
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
    int q;
	if(p < r){
		q = partitionx(p, q);
		quickSort(p, q);
		quickSort(q+1, r);
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
	quickSort(0, tam-1);
	tempo2 = clock() - tempo1;

	if(tam<=291){
		printf(" Original ||   Ordenado   ||  Índice\n\t  ||\t\t  ||\t\t\n");
		printf("================================================\n");
		imprime();
	} else {
		imprime();
		printf("================================================\n");
		printf("\t  ||\t\t  ||\n Original ||   Ordenado   ||  Índice\n\t  \n");
	}
	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}

// PANQUECA
