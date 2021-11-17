/*Algoritmo para multiplicação de matrizes
programa multiplica_matrizes;
matriz mat1, mat2, mat3;
inteiro linha, coluna, i, acumula;
"leia mat1";
"leia mat2";
"verifique se mat1 é compativel com mat2";
para linha de 1 até "numero de linhas de mat1" faça
para coluna de 1 até "numero de colunas de mat2" faça
acumula=0;
para i de 1 até "numero de colunas de mat1" faça
acumula=acumula+mat1[linha][i]*mat2[i][coluna];
fimpara;
mat3[linha][coluna]=acumula;
fimpara;
fimpara;
imprima mat3;
fim programa;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int mat1[100][100],mat2[100][100],matm[100][100];
    int i,j,k,lin1,col1,lin2,col2,ac=0;
    printf("Informe a dimensao linha da matriz 1 ");
    scanf("%d",&lin1);
    printf("Informe a dimensao coluna da matriz 1 ");
    scanf("%d",&col1);
    printf("Informe a dimensao linha da matriz 2 ");
    scanf("%d",&lin2);
    printf("Informe a dimensao coluna da matriz 2 ");
    scanf("%d",&col2);
    
    srand(time(NULL));
    //preencher a matria 1
    for(i=0;i<lin1;i++)
        for(j=0;j<col1;j++)
        {
            mat1[i][j]=rand()%10;
        }
        
    //preencher a matriz 22
    for(i=0;i<lin2;i++)
        for(j=0;j<col2;j++)
        {
            mat2[i][j]=rand()%10;
        }
        
    if(col1==lin2)
    {
    //haverá multiplicação
    //para linha de 1 até "numero de linhas de mat1" faça
        for(i=0;i<lin1;i++)
        {
        // para coluna de 1 até "numero de colunas de mat2" faça
            for(j=0;j<col2;j++)
            {
                ac=0;
                //para i de 1 até "numero de colunas de mat1" faça
                for(k=0;k<col1;k++)
                {
                    //acumula=acumula+mat1[linha][i]*mat2[i][coluna];
                    ac=ac+mat1[i][k]*mat2[k][j];
                }
                //mat3[linha][coluna]=acumula;
                matm[i][j]=ac;
            }
        }
    }
    
    else
    {
        printf("Nao pode haver multiplicação");
    }
    
    for(i=0;i<lin1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
    
    for(i=0;i<lin2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");

    for(i=0;i<lin1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",matm[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}

