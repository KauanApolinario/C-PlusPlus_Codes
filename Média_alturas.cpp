#include<stdio.h>
main()
{
	float alt, media, soma_alt, i;
	i=1;
	soma_alt=0;
	
	while(i<=10)
	{
		printf("Digite a altura do aluno N° %.0f : ",i);
		scanf("%f",&alt);
		soma_alt = soma_alt+alt;
		i++;
	}
	media=soma_alt/(i-1);
	printf("\nMedia das alturas = %.2f\n",media);
	
	
}
