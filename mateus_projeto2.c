#include <stdio.h>
void main ( ) {
int x,y;

	printf ("Este programa vai verificar qual qual numero e maior\n");
	printf ("Informe o primeiro numero\n");
		
		scanf ("%d",&x);
		printf ("Informe o segundo numero\n");
			
			scanf ("%d",&y);
			printf ("\n");

if (x > y)
printf ("%d e maior que %d",x,y);
else
if (y > x)
printf ("%d e maior que %d",y,x);
else
printf ("os dois numero sao iguais");
printf ("\n"); 

return 0;
}
