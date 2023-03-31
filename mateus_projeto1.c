#include <stdio.h>
#include <stdlib.h>

int main(){
	
float taxa1 = 0.25; 
float taxa2 = 0.20;
int copias;

printf("== Orcamento da Grafica == \n");

printf("Informe o numero de copias:\n");
scanf("%d", &copias);


	printf("\nNumero de copia(s) informada(s) foi de: %d copia(s)", copias);
	
		if(copias <= 100){
			printf("\n\nO valor de copia(s) e de R$%.2f\n", copias * taxa1);
		}else{
			if(copias > 100){
				printf("\n\nO valor de copia(s) e de: R$%.2f\n", copias * taxa2);
			}
		}

return 0;
}
