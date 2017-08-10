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
	bubblesort();
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

