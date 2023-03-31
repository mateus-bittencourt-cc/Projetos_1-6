#include <stdio.h>

int main() {
  float distancia,volume,consumo;
  
  printf("= = = Calculadora de Km/l = = =\n\n");

  printf("Distancia percorrida pelo seu veiculo (km): \n");
  scanf("%f", &distancia);

  printf("Volume gasto de combustivel (l): \n");
  scanf("%f", &volume);

  consumo = distancia/volume;
  
  printf("Seu consumo medio e de: \n");
  printf("%.f km/l\n", consumo);

  return(0);
}
