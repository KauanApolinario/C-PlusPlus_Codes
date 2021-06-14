#include<stdio.h>
main()
{
	int i,n,soma=0;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			soma=soma+i;
		}
	}
	
	if(n==soma)
	{
		printf("o numero %d e perfeito",n);
	}
	
	else
	{
		printf("o numero %d nao e perfeito",n);
	}



}
