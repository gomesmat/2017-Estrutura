#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int num_vertices = 0;
int vertices[tam];
int arestas[tam][tam];

void gera() {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            arestas[i][j] = 0; // Gera um grafo novo, sem arestas
        }
    }
}

void imprime_grafo() {
    printf(" Mostrando grafo:\n\n");
    for (int m=0; m < num_vertices; m++){
    	printf(" %d - ", vertices[m]);
		for (int g=0; g < num_vertices; g++){
    		if (arestas[m][g] == 1) printf("<%d, %d> ", vertices[m], vertices[g]);
		}
		printf("\n");
	}
}

void insere(int valor) { //Insere V�rtices
    int i ;
    if (num_vertices<tam) {
        for(i=0; i<num_vertices; i++) {
            if (valor==vertices[i]) {
                printf("\nV�rtice repetido.\n");
                return;
            }
        }
        vertices[num_vertices] = valor;
        num_vertices++;
    } else printf ("\nSem espa�o dispon�vel.\n");
}

void insereAresta(int orig, int dest) { //Insere Arestas
    int i,j;
    for (i = 0; i < num_vertices; i++) {
        if (vertices[i] == orig) break;
    }
    if (i == num_vertices) { //Se o valor de i � igual ao n�mero de v�rtices, a vertice de origem n�o existe 
        printf ("\nV�rtice origem n�o existe.\n");
        return;
    }
    for (j = 0; j <= num_vertices; j++) {
        if (vertices[j] == dest) break;
    }
    if (j == num_vertices) { //Se o valor de j � igual ao n�mero de v�rtices, a vertice de destino n�o existe 
        printf ("\nV�rtice de destino n�o existe.\n");
        return;
    }
    arestas[i][j] = 1; // 1 significa que existe aresta nas coordenadas [i,j]
}

void removeAresta(int orig, int dest){
    int i,j;
    for (i = 0; i < num_vertices; i++) {
        if (vertices[i] == orig) break;
    }
    if (i == num_vertices) { //Se o valor de i � igual ao n�mero de v�rtices, a vertice de origem n�o existe 
        printf ("\nV�rtice origem n�o existe.\n");
        return;
    }
    for (j = 0; j <= num_vertices; j++) {
        if (vertices[j] == dest) break;
    }
    if (j == num_vertices) { //Se o valor de j � igual ao n�mero de v�rtices, a vertice de destino n�o existe 
        printf ("\nV�rtice de destino n�o existe.\n");
        return;
    }
    if (arestas[i][j] == 1){
    	printf("\n\n\n Removendo aresta <%d, %d>...\n\n", vertices[i], vertices[j]);
		arestas[i][j] = 0; // 0 significa que n�o existe aresta nas coordenadas [i,j]
	} else printf("\n\n\n N�o existe aresta <%d, %d> para remover.\n\n", vertices[i], vertices[j]);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    gera();
    insere(0);
    insere(1); 
    insere(2);
    insere(10);
    insere(20);
    insere(30);
    insereAresta(0,1);
    insereAresta(0,2);
    insereAresta(1,0);
    insereAresta(1,2);  
    insereAresta(10,20);
    insereAresta(10,30);
    insereAresta(20,30);
    imprime_grafo();
    removeAresta(20,30);
    imprime_grafo();
    removeAresta(20,30);
    imprime_grafo();
}
