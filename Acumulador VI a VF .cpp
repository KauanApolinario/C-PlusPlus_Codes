#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int vi,vf,i,soma;
printf("Digite o valor inicial ");
scanf("%d",&vi);
printf("Digite o valor final ");
scanf("%d",&vf);
soma=0;
i=vi;
if(i<vf)
{
while(i<=vf)
{
printf("%d\n",i);
soma=soma+i;
i++;
}
}
else
{
while(i>=vf)
{
printf("%d\n",i);
soma=soma+i;
i--;
}
}
printf("\nSoma dos valores = %d\n",soma);
}
