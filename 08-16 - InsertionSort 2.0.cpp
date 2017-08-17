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

void insertionSort(){
    int x, i, aux;
    bool found;
    for(int k=1; k<=tam-1; k++){
        x = vetor[k];
        i = k-1;
        found=false;
        while(!found && i>= 0){
            if(vetor[i] > x){
                aux = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = aux;
                i--;
            } else found = true;
        }
    }
}


void imprime(){
	for(int i=0; i<tam; i++){
		printf(" %d\t  ||   %d\t  ||  %d / %d\n", vetorOld[i], vetor[i], i+1, tam);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	clock_t tempo1, tempo2;
	printf(" Ordenando.");
	gera();
	Sleep(750); printf(".");

	tempo1 = clock();
	insertionSort();
	tempo2 = clock() - tempo1;

	Sleep(550); printf(".");
	Sleep(500); printf(".");
	Sleep(450); printf(".");
	Sleep(970);
	system("cls");
	printf(" Mostrando o vetor:");
	Sleep(1012);

	system("cls");
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
