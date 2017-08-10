#include <stdio.h>
#include <conio.h>


 somalinha(int M[3][3])
{
    int i,j,soma[3];
    for(i=0;i<3;i++);
    {
        soma[i]=0;
        for(j=0;j<3;j++)
            soma[i] = soma[i]+M[i][j];
    }
    if(soma[0] == soma[1] && soma[2] == soma[0])
    {
        return 1;
    }
    else
        return 0;
}
int somacoluna(int M[3][3])
{
    int i,j,soma[3];
    for(i=0;i<3;i++)
    {
        soma[i]=0;
        for(j=0;j<3;j++)
            soma[i] = soma[i]+M[j][i];
    }
    if(soma[0]==soma[1] && soma[1] == soma[2] && soma[0] == soma[2])
        return 1;
    else
        return 0;
}

int somadiagonal1(int M[3][3])
{
    int i, soma;
    soma = 0;
    for(i=0;i<3;i++)
        soma = soma + M[i][i];

    return soma;
}

int somadiagonal2(int M[3][3])
{
    int i, soma,j;
    soma = 0;
    i=0;
    j=2;
    for(i=0;i<3;i++)
        soma = soma + M[i][2-i];
    return soma;
}

int diagonais(int diagonal1, int diagonal2)
{
    if(diagonal1 == diagonal2)
        return 1;
    else
        return 0;
}

void quadrado_magico(int M[3][3])
{
	int i,j;
    i = somadiagonal1(M);
    j = somadiagonal2(M);
    if(somalinha(M)!=0 && somacoluna(M)!=0 && diagonais(i,j)!=0)
        printf("\nIsto eh um quadrado magico!");
    else
        printf("\nIsto nao eh um quadrado magico.");
}


main()
{
    int M[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
            printf("Informe M[%d,%d]:  ",i+1,j+1);
            scanf("%d", &M[i][j]);
            }
    }
    quadrado_magico(M);
    getch();
}
