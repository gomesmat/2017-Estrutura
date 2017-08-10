#include <windows.h>
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

int selectionSort(){
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
	return 1;
}


void imprime(){
	for(int i=0; i<tam; i++){
		printf(" %d\t  ||   %d\n", vetorOld[i], vetor[i]);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	clock_t tempo1, tempo2;
	printf(" Ordenando.");
	gera();
	Sleep(750); printf("."); 
	
	tempo1 = clock();
	selectionSort();
	tempo2 = clock() - tempo1;
	
	Sleep(750); printf("."); 
	Sleep(750); printf("."); 
	Sleep(750); printf("."); 
	Sleep(970);
	system("cls");
	printf(" Mostando o vetor:");
	Sleep(1998);
	
	system("cls");
	if(tam<=291){
		printf(" Original ||   Ordenado\n\t  ||\n");
		printf("========================\n");
		imprime();
	} else {
		imprime();
		printf("========================\n");
		printf("\t  ||\n Original ||   Ordenado\n");
	}

	printf("\n>> Tempo de operação: %.4f\n", (float) tempo2/CLOCKS_PER_SEC);
}
