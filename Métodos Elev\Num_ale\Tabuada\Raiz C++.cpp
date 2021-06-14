#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void escreve(void)
{
    printf("Kauan Apolinário\n");
}

void eleva (int base, int expoente)
{
    int i,el=1;
    
for(i=1;i<=expoente;i++)
{
    el = el * base;
}
    printf("%d elevado a %d = %d\n",base,expoente,el);
}

void verifica_par(int x)
{
    if(x%2==0)
{
    printf("%d = numero PAR \n",x);
}
}

void exibe_tabuada(int c)
{
    int i,tab;
    for(i=0;i<=10;i++)
{
    tab = c * i;
    printf("%d x %d = %d\n",c,i,tab);
}
}

float raiz (int x)
{
    float r;
    r=sqrt(x);
    return(r);
}

int aleatorio(int x)
{
    int a;
    srand(time(NULL));
    a=rand()%x;
    return(a);
}

main()
{
int a,b,ale;
float rz;
printf("Digite o valor de a ");
scanf("%d",&a);
printf("Digite o valor de b ");
scanf("%d",&b);
escreve();//Escreve na tela o seu nome
eleva(a,b);//eleva a base "a" ao expoente "b" SEM USAR POW
verifica_par(a);//verifica se o valor de "a" é par e mostra na template
exibe_tabuada(b);//exibe na tela a tabuada do "b" de 1 a 10
rz=raiz(b);//mostra na tela a raiz quadrada de "r" utilizar o sqrt
printf("Raiz quadrada = %.2f\n",rz);
ale=aleatorio(b);//gera um numero aleatório de 0 a "b"
printf("Numero gerado = %d\n",ale);
}

