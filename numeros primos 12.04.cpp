#include<stdio.h>
main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num%1==num)
	{
	printf("O numero %d e um numero primo.",num);
	}
	
	else if(num%num==1)
	{
	printf("O numero %d e um numero primo.",num);
	}
	
	else
	{
	printf("O numero %d nao e um numero primo.",num);
	}
}
