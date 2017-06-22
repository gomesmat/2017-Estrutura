#include <stdio.h>
#include <stdlib.h>
#include <ctype.h.h>
#include <locale.h>
#include <string.h>

fscanf(fp)

using namespace std;

int main(){
    setlocale(LC_ALL,”Portuguese”);
    FILE *fp;
    char string[100];

    fp = fopen("texto.txt","r");

    if (fp == NULL){
        printf("Erro!");
        return 0;
    }

    if ( fgets (mystring , 100 , pFile) != NULL ) puts (mystring);

/*
    while(!feof(fp)){
        fscanf(fp, "%s", auxiliar);
        printf("\n%s\n", auxiliar);
    //  insereArvore(auxiliar);
    }
*/
    fscanf
    fclose(fp);

}
