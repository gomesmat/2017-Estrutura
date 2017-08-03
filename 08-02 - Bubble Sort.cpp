#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 8888888

int vetor[tam];

void gera(){
	int i;
	for(i=0; i<tam; i++) vetor[i] = rand();
}

void bubblesort(){
	int pass = 1, aux = 0;
 	bool sorted = false;
 	while (!sorted && pass < tam){
       sorted = true;
       for (int i=0; i<=tam-pass-1; i++){
            if (vetor[i] > vetor[i+1]){
                   aux = vetor[i];
                   vetor[i] = vetor [i+1];
                   vetor[i+1] = aux;
                   sorted = false;
            }
    	}
		pass++;
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
	bubblesort();
	tempo2 = clock() - tempo1;
	printf("Vetor ordenado:\n\n");
	imprime();
	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}

