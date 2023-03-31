#include <stdio.h>

int main()
{
	printf("= = = Contadora de numeros pares e impares = = =\n\n");
	printf("Digite 10 numeros de sua preferencia:\n");
	
	int n = 10;
	
	int x;
	
	int quantiaPares 	= 0,
		quantiaImpares 	= 0;
		
	register int i;
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);
		
		if( !(x%2) ) 
			quantiaPares++;
		else
			quantiaImpares++;
	}
	
	printf("\n%d numeros pares.\n", quantiaPares);
	printf("%d numeros impares.\n", quantiaImpares);
	
	return (0);
}
