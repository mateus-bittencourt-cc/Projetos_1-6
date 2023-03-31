
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char seuNome [30];
  float seuSalario = 0; 

  printf("Escreva o seu nome: ");
  scanf("%s", seuNome);
  printf("Coloque o seu salario atual: R$");
  scanf("%f", &seuSalario);

  if (seuSalario<= 999){
    seuSalario = seuSalario;
    printf("%s o seu novo salario e de: R$%.2f", seuNome, seuSalario);

  }
  else if (seuSalario > 1000 && seuSalario < 1001){
    seuSalario = seuSalario + seuSalario * 0.1;
    printf("%s o seu novo salario e de: R$%.2f", seuNome, seuSalario);
  }
  else {
    seuSalario = seuSalario + seuSalario *0.1;
    printf("%s o seu novo salario e de: R$%.2f", seuNome, seuSalario);
  
  }
  return 0;

}
