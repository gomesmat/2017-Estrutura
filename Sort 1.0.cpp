#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 700

int vetor[tam], vetorOld[tam];

void gera(){
	int i;
	srand (time(NULL));
	for(i=0; i<tam; i++) vetor[i] = rand();
	for(i=0; i<tam; i++) vetorOld[i] = vetor[i];
}

void xSort(){

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
	xSort();
	tempo2 = clock() - tempo1;

	if(tam<=291){
		printf(" Original ||   Ordenado   \n");
		printf("==============================\n");
		imprime();
	} else {
		imprime();
		printf("==============================\n");
		printf("\t\t  ||\n Original ||   Ordenado\n");
	}

	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}
