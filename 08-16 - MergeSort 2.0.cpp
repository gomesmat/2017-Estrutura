#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tam 1000

int vetor[tam], vetorOld[tam];
int scratch[tam];

void gera(){
	int i;
	srand (time(NULL));
	for(i=0; i<tam; i++) vetor[i] = rand();
	for(i=0; i<tam; i++) vetorOld[i] = vetor[i];
}

void mergeSort(int lo, int hi){
    int mid, l, h, k;
    if(lo < hi){
            mid = (lo + hi)/2;
            mergeSort(lo, mid);
            mergeSort(mid+1, hi);
            l = lo;
            h = mid+1;
            for(k=lo; k<=hi; k++){
                if(l<=mid && (h > hi || vetor[l] < vetor[h])){
                    scratch[k] = vetor[l];
                    l++;
                } else {
                    scratch[k] = vetor[h];
                    h++;
                }
            }
            for(k=lo; k<=hi; k++){
                vetor[k] = scratch[k];
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
	mergeSort(0, tam-1);
	tempo2 = clock() - tempo1;

	Sleep(550); printf(".");
	Sleep(500); printf(".");
	Sleep(450); printf(".");
	Sleep(970);
	system("cls");
	printf(" Mostando o vetor:");
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
