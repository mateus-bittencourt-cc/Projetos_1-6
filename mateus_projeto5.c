#include <stdio.h>
#include <stdlib.h>

main(){
	
int num, soma=0, cont=0;
float media;

	printf ("\nDigite um numero inteiro e digite zero quando quiser finalizar a conta:\n ");
	scanf ("%d", &num);
	
		if (num!=0)
		{
		do {
		if (num%2==0)
		{
		cont++;
		soma=soma+num;
		}
		
			printf ("\nProximo numero: ");
			scanf ("%d", &num);
				
				} while (num!=0);
				media=(float)soma/cont;
                 
				 printf ("\nA media e %.3f", media);
}

return 0;
}
